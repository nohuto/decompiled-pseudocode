/*
 * XREFs of MiReleaseWsle @ 0x1400AE200
 * Callers:
 *     MiSwapWslEntries @ 0x140097790 (MiSwapWslEntries.c)
 *     MiConvertToLinkedWsles @ 0x1400AD49C (MiConvertToLinkedWsles.c)
 *     MiTerminateWsle @ 0x1400AE090 (MiTerminateWsle.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x140123B68 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 * Callees:
 *     MiVolunteerForTrimFirst @ 0x1400AD700 (MiVolunteerForTrimFirst.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseWsle(unsigned __int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  ULONG_PTR v4; // rdi
  __int64 v9; // rcx
  unsigned __int64 *v10; // rdx
  unsigned __int64 v11; // rbx
  int v12; // ebx
  ULONG_PTR v13; // r8
  _QWORD *v14; // rdx
  __int64 result; // rax

  v4 = a2[23];
  if ( a4 )
  {
    if ( a1 >= *(_QWORD *)(v4 + 8) )
    {
      v9 = a2[23];
      v10 = (unsigned __int64 *)(*(_QWORD *)(v4 + 496) + a1 * *(unsigned int *)(v4 + 64));
      v11 = *v10;
      MiRemoveEntryWsle(v9, v10);
      v12 = (v11 >> 9) & 7;
      if ( v12 )
      {
        --a2[(unsigned int)(v12 - 1) + 5];
        if ( v12 == 7 )
          MiVolunteerForTrimFirst((__int64)a2, -1LL);
      }
    }
  }
  v13 = *(_QWORD *)v4;
  if ( *(_QWORD *)v4 != 0xFFFFFFFFFLL )
  {
    if ( v13 < *(_QWORD *)(v4 + 8) || v13 > *(_QWORD *)(v4 + 32) )
      KeBugCheckEx(0x1Au, 0x5004uLL, v4, *(_QWORD *)v4, *(_QWORD *)(v4 + 32));
    v14 = (_QWORD *)(*(_QWORD *)(v4 + 496) + v13 * *(unsigned int *)(v4 + 64));
    *v14 ^= (*(_DWORD *)v14 ^ (2 * (_DWORD)a1)) & 0xFFFFFFE;
  }
  result = *(_QWORD *)(v4 + 496);
  *(_QWORD *)(a1 * *(unsigned int *)(v4 + 64) + result) = (v13 << 28) | 0xFFFFFFE;
  *(_QWORD *)v4 = a1;
  if ( a4 )
  {
    --a2[15];
    result = a3 + 0x98000000000LL;
    if ( (unsigned __int64)(a3 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
      --a2[13];
  }
  return result;
}
