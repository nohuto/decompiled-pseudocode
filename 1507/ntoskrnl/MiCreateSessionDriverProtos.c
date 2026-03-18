/*
 * XREFs of MiCreateSessionDriverProtos @ 0x1406A0C0C
 * Callers:
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401540CC (MiAddPrivateFixupEntryForSystemImage.c)
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 *     MiDeleteSessionDriverProtos @ 0x1405833BC (MiDeleteSessionDriverProtos.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 */

__int64 __fastcall MiCreateSessionDriverProtos(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // esi
  __int64 v12; // rbx
  ULONG i; // edi
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  ULONG v19; // r8d
  __int64 v20; // rdx
  _QWORD *v21; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD v22[20]; // [rsp+40h] [rbp-98h] BYREF

  v6 = a2 - *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  if ( (int)MiMapImageInSystemSpace(a1, 3u, (__int64)v22) < 0 )
    return 0LL;
  v11 = v22[0];
  v12 = a1 + 120;
  for ( i = 0; ; i += v14 )
  {
    if ( !v12 )
    {
      MiUnmapImageInSystemSpace((__int64)v22, v7, v8, v9);
      return 1LL;
    }
    v7 = *(unsigned __int16 *)(v12 + 32);
    v14 = *(_DWORD *)(v12 + 44);
    LOWORD(v7) = (unsigned __int16)v7 >> 1;
    if ( (v7 & 4) == 0 && ((MiFlags & 0x80000) != 0 || (MiFlags & 0x30000) == 0 || (v7 & 2) == 0) )
      break;
LABEL_9:
    v12 = *(_QWORD *)(v12 + 16);
    v11 += v14 << 12;
  }
  if ( (int)MiAllocatePerSessionProtos(v12, v11, i, v6, (__int64)&v21) >= 0 )
  {
    v18 = v21;
    *v21 = a2 + ((unsigned __int64)i << 12);
    v19 = *(_DWORD *)(v12 + 44);
    *(_QWORD *)(v12 + 24) = v18;
    RtlClearBits(*(PRTL_BITMAP *)(a3 + 40), i, v19);
    goto LABEL_9;
  }
  MiUnmapImageInSystemSpace((__int64)v22, v15, v16, v17);
  MiDeleteSessionDriverProtos(a1, v20);
  return 0LL;
}
