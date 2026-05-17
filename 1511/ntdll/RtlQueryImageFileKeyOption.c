/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x18007D1E0
 * Callers:
 *     LdrpMapViewOfSection @ 0x18000EA30 (LdrpMapViewOfSection.c)
 *     LdrpQueryIllegalCWDDevices @ 0x18007CDAC (LdrpQueryIllegalCWDDevices.c)
 *     RtlQueryImageFileExecutionOptions @ 0x18007CE90 (RtlQueryImageFileExecutionOptions.c)
 *     RtlQueryApplicationKeyOption @ 0x18007D13C (RtlQueryApplicationKeyOption.c)
 *     LdrpInitializeExecutionOptions @ 0x1800902B4 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800CADEC (LdrpInitializeApplicationVerifierPackage.c)
 *     AVrfInitializeVerifier @ 0x1800CDFDC (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180018130 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180075D40 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A53A0 (NtQueryValueKey.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlQueryImageFileKeyOption(
        __int64 a1,
        __int64 a2,
        int a3,
        int *a4,
        unsigned int a5,
        unsigned int *a6)
{
  __int64 result; // rax
  _DWORD *v10; // rsi
  unsigned int v11; // ebx
  unsigned __int64 v12; // r12
  unsigned int v13; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // edi
  size_t v19; // r8
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v21[4]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v22; // [rsp+40h] [rbp-C0h]
  unsigned int *v23; // [rsp+48h] [rbp-B8h]
  _BYTE v24[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v23 = a6;
  result = RtlInitUnicodeStringEx((__int64)v21, a2);
  if ( (int)result < 0 )
    return result;
  if ( a5 >= 0x3F4 )
  {
    v13 = a5 + 12;
    goto LABEL_9;
  }
  v10 = v24;
  result = NtQueryValueKey(a1, v21, 2LL, v24, 1024, &v20);
  v11 = result;
  if ( (int)result >= 0 )
  {
    v12 = 0LL;
LABEL_14:
    v17 = v10[1];
    if ( ((v17 - 3) & 0xFFFFFFFB) != 0 )
    {
      v18 = 4;
      if ( v17 == 4 )
      {
        if ( a3 == 4 )
        {
          if ( a5 == 4 && v10[2] == 4 )
          {
            v20 = 4;
            if ( a4 )
            {
              *a4 = v10[3];
LABEL_38:
              if ( v23 && ((int)(v11 + 0x80000000) < 0 || v11 == -2147483643) )
                *v23 = v18;
              goto LABEL_42;
            }
            goto LABEL_37;
          }
          goto LABEL_21;
        }
LABEL_52:
        v11 = -1073741788;
        goto LABEL_42;
      }
      if ( v17 == 11 )
      {
        if ( a3 == 11 )
        {
          v18 = 8;
          if ( a5 == 8 && v10[2] == 8 )
          {
            v20 = 8;
            if ( a4 )
            {
              *(_QWORD *)a4 = *(_QWORD *)(v10 + 3);
              goto LABEL_38;
            }
LABEL_37:
            v11 = -2147483643;
            goto LABEL_38;
          }
          goto LABEL_21;
        }
        goto LABEL_52;
      }
      if ( v17 != 1 )
      {
        v11 = -1073741788;
        goto LABEL_31;
      }
      if ( a3 == 4 )
      {
        if ( a5 != 4 )
        {
LABEL_21:
          v11 = -1073741820;
LABEL_42:
          if ( v12 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
          return v11;
        }
        if ( ((unsigned __int8)a4 & 3) != 0 )
        {
          v11 = -2147483646;
          goto LABEL_42;
        }
        v20 = 4;
        if ( !a4 )
          goto LABEL_37;
        v22 = v10 + 3;
        v21[0] = *((_WORD *)v10 + 4);
        v21[1] = *((_WORD *)v10 + 4);
        v11 = RtlUnicodeStringToInteger(v21, 0, a4);
LABEL_31:
        v18 = v20;
        goto LABEL_38;
      }
      v18 = v10[2];
      v20 = v18;
      if ( v18 > a5 )
        goto LABEL_37;
      v19 = v18;
    }
    else
    {
      if ( a3 != v17 )
        goto LABEL_52;
      v18 = v10[2];
      v20 = v18;
      if ( !a4 || v10[2] > a5 )
        goto LABEL_37;
      v19 = (unsigned int)v10[2];
    }
    memmove(a4, v10 + 3, v19);
    goto LABEL_38;
  }
  if ( (_DWORD)result == -2147483643 )
  {
    while ( 1 )
    {
      v13 = v20;
LABEL_9:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return 3221225495LL;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v13);
      v12 = Heap;
      if ( !Heap )
        return 3221225495LL;
      v10 = (_DWORD *)Heap;
      v16 = NtQueryValueKey(a1, v21, 2LL, Heap, v13, &v20);
      v11 = v16;
      if ( v16 >= 0 )
        goto LABEL_14;
      if ( v16 != -2147483643 )
        goto LABEL_42;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10);
    }
  }
  return result;
}
