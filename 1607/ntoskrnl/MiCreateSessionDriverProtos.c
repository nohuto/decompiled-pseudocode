/*
 * XREFs of MiCreateSessionDriverProtos @ 0x140664698
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401313D4 (MiAddPrivateFixupEntryForSystemImage.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
 *     MiDeleteSessionDriverProtos @ 0x140546890 (MiDeleteSessionDriverProtos.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 */

__int64 __fastcall MiCreateSessionDriverProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // r14
  __int16 v13; // cx
  _QWORD *v14; // rax
  ULONG v15; // r8d
  _QWORD *v16; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v17[10]; // [rsp+40h] [rbp-98h] BYREF

  v6 = a2 - *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (int)MiMapImageInSystemSpace(a1, 3u, (__int64)v17) < 0 )
    return 0LL;
  v8 = v17[0];
  v9 = a1 + 128;
  v10 = 0;
  if ( a1 != -128 )
  {
    v11 = MiFlags;
    do
    {
      v12 = *(unsigned int *)(v9 + 44);
      v13 = *(_WORD *)(v9 + 32) >> 1;
      if ( (v13 & 4) == 0 && ((v11 & 0x20000) != 0 || (v11 & 0x4000) == 0 || (v13 & 2) == 0) )
      {
        if ( (int)MiAllocatePerSessionProtos(v9, v8, v10, v6, &v16) < 0 )
        {
          MiUnmapImageInSystemSpace((__int64)v17);
          MiDeleteSessionDriverProtos(a1);
          return 0LL;
        }
        v14 = v16;
        *v16 = a2 + ((unsigned __int64)v10 << 12);
        v15 = *(_DWORD *)(v9 + 44);
        *(_QWORD *)(v9 + 24) = v14;
        RtlClearBits(*(PRTL_BITMAP *)(a3 + 40), v10, v15);
        v11 = MiFlags;
      }
      v9 = *(_QWORD *)(v9 + 16);
      v10 += v12;
      v8 += v12 << 12;
    }
    while ( v9 );
  }
  MiUnmapImageInSystemSpace((__int64)v17);
  return 1LL;
}
