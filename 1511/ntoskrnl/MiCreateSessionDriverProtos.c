/*
 * XREFs of MiCreateSessionDriverProtos @ 0x140621578
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140126394 (MiAddPrivateFixupEntryForSystemImage.c)
 * Callees:
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiUnmapImageInSystemSpace @ 0x1403C72A0 (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x1403C72D4 (MiMapImageInSystemSpace.c)
 *     MiDeleteSessionDriverProtos @ 0x14050BE0C (MiDeleteSessionDriverProtos.c)
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 */

__int64 __fastcall MiCreateSessionDriverProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 v8; // rbp
  __int64 v9; // rbx
  ULONG i; // edi
  __int64 v11; // r14
  __int16 v12; // cx
  _QWORD *v13; // rax
  ULONG v14; // r8d
  _QWORD *v15; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[10]; // [rsp+40h] [rbp-98h] BYREF

  v6 = a2 - *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (int)MiMapImageInSystemSpace(a1, 3u, (__int64)v16) < 0 )
    return 0LL;
  v8 = v16[0];
  v9 = a1 + 120;
  for ( i = 0; ; i += v11 )
  {
    if ( !v9 )
    {
      MiUnmapImageInSystemSpace((__int64)v16);
      return 1LL;
    }
    v11 = *(unsigned int *)(v9 + 44);
    v12 = *(_WORD *)(v9 + 32) >> 1;
    if ( (v12 & 4) == 0 && ((MiFlags & 0x80000) != 0 || (MiFlags & 0x10000) == 0 || (v12 & 2) == 0) )
      break;
LABEL_10:
    v9 = *(_QWORD *)(v9 + 16);
    v8 += v11 << 12;
  }
  if ( (int)MiAllocatePerSessionProtos(v9, v8, i, v6, &v15) >= 0 )
  {
    v13 = v15;
    *v15 = a2 + ((unsigned __int64)i << 12);
    v14 = *(_DWORD *)(v9 + 44);
    *(_QWORD *)(v9 + 24) = v13;
    RtlClearBits(*(PRTL_BITMAP *)(a3 + 40), i, v14);
    goto LABEL_10;
  }
  MiUnmapImageInSystemSpace((__int64)v16);
  MiDeleteSessionDriverProtos(a1);
  return 0LL;
}
