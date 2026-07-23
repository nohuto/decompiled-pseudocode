/*
 * XREFs of PfpFileSetupObjectAttributes @ 0x1404EC200
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1403EE924 (PfpVolumePrefetchMetadata.c)
 *     PfpFileBuildReadSupport @ 0x1404EC2A0 (PfpFileBuildReadSupport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpFileSetupObjectAttributes(
        __int64 a1,
        int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  int v6; // ebx
  __int64 v7; // rax
  __int16 v8; // ax
  __int64 v9; // rdx
  __int64 result; // rax

  v6 = *a2;
  v7 = *((_QWORD *)a2 + 4);
  *a6 = (*a2 & 2) != 0 ? 16417 : 96;
  if ( !v7 || (v6 & 4) != 0 )
  {
    *a6 |= 0x2000u;
    *(_QWORD *)(a4 + 8) = a2 + 2;
    *(_DWORD *)a4 = 524296;
    v9 = *(_QWORD *)(((unsigned __int64)a3 << 6) + *(_QWORD *)(a1 + 16));
  }
  else
  {
    *(_QWORD *)(a4 + 8) = v7 + 2;
    v8 = 2 * (*((_WORD *)a2 + 20) - 1);
    *(_WORD *)a4 = v8;
    *(_WORD *)(a4 + 2) = v8 + 2;
    v9 = *(_QWORD *)(((unsigned __int64)a3 << 6) + *(_QWORD *)(a1 + 16) + 32);
  }
  result = a5;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_DWORD *)a5 = 48;
  *(_QWORD *)(a5 + 8) = v9;
  *(_DWORD *)(a5 + 24) = 576;
  *(_QWORD *)(a5 + 16) = a4;
  return result;
}
