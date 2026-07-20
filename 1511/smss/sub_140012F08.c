/*
 * XREFs of sub_140012F08 @ 0x140012F08
 * Callers:
 *     sub_1400037AC @ 0x1400037AC (sub_1400037AC.c)
 *     sub_14000474C @ 0x14000474C (sub_14000474C.c)
 * Callees:
 *     sub_14000436C @ 0x14000436C (sub_14000436C.c)
 *     sub_140004390 @ 0x140004390 (sub_140004390.c)
 *     sub_14000478C @ 0x14000478C (sub_14000478C.c)
 *     sub_140012DA4 @ 0x140012DA4 (sub_140012DA4.c)
 *     sub_140012E3C @ 0x140012E3C (sub_140012E3C.c)
 */

__int64 __fastcall sub_140012F08(__int64 a1, int a2, int *a3)
{
  HANDLE *v3; // rbx
  unsigned int v4; // edi
  HANDLE *v5; // rbp
  ULONG v9; // ecx
  NTSTATUS v10; // eax
  signed __int64 v11; // rax
  HANDLE Object[5]; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER Interval; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(HANDLE **)(a1 + 16);
  v4 = 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v3 )
      goto LABEL_8;
    sub_14000436C((__int64)a3);
    v3 = (HANDLE *)sub_140012E3C();
    if ( !v3 )
    {
      Interval.QuadPart = -50000000LL;
      NtDelayExecution(0, &Interval);
    }
    sub_140004390(*(_DWORD *)(a1 + 64), *a3, 0LL);
    if ( (unsigned int)sub_14000478C(a1) )
      break;
    if ( v3 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v5 = v3;
        v3 = *(HANDLE **)(a1 + 16);
      }
      else
      {
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), (signed __int64)v3, 0LL);
        if ( v11 )
        {
          v5 = v3;
          v3 = (HANDLE *)v11;
        }
      }
LABEL_8:
      _InterlockedIncrement((volatile signed __int32 *)v3);
      sub_14000436C((__int64)a3);
      if ( v5 )
        sub_140012DA4(v5);
      v9 = 1;
      Object[0] = v3[1];
      if ( a2 == 1 )
      {
        v9 = 2;
        Object[1] = *(HANDLE *)(a1 + 32);
      }
      v10 = NtWaitForMultipleObjects(v9, Object, WaitAny, 0, 0LL);
      if ( v10 )
      {
        if ( v10 == 1 )
          v10 = -1073741823;
        v4 = v10;
      }
      else if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
      {
        sub_140012DA4(v3);
      }
      sub_140004390(*(_DWORD *)(a1 + 64), *a3, 0LL);
      return v4;
    }
    v3 = *(HANDLE **)(a1 + 16);
  }
  if ( v3 )
    sub_140012DA4(v3);
  return 0LL;
}
