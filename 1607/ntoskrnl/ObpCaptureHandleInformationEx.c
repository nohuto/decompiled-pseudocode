/*
 * XREFs of ObpCaptureHandleInformationEx @ 0x140666260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ObpCaptureHandleInformationEx(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx

  *a6 += 40;
  if ( *a6 < 0x28 )
    return 3221225621LL;
  if ( a5 < *a6 )
    return 3221225476LL;
  v9 = (*a3 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = a2;
  v10 = ((__int64)*(unsigned int *)a3 >> 17) & 7;
  if ( (a3[1] & 0x2000000) != 0 )
    LOBYTE(v10) = v10 | 8;
  *(_DWORD *)(*(_QWORD *)a1 + 32LL) = v10 & 7;
  *(_WORD *)(*(_QWORD *)a1 + 30LL) = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v9 + 24) ^ (unsigned __int64)BYTE1(v9)]
                                                        + 40);
  *(_QWORD *)(*(_QWORD *)a1 + 16LL) = a4;
  **(_QWORD **)a1 = v9 + 48;
  result = 0LL;
  *(_WORD *)(*(_QWORD *)a1 + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)a1 + 24LL) = a3[1] & 0x1FFFFFF;
  *(_QWORD *)a1 += 40LL;
  return result;
}
