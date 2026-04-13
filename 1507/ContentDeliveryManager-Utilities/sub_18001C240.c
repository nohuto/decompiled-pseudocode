/*
 * XREFs of sub_18001C240 @ 0x18001C240
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008A00 @ 0x180008A00 (sub_180008A00.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001AD40 @ 0x18001AD40 (sub_18001AD40.c)
 *     sub_18001F844 @ 0x18001F844 (sub_18001F844.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001C240(volatile signed __int32 *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  __int64 v4; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // r9
  int v7; // r15d
  __int64 v8; // r14
  _QWORD v10[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF
  volatile signed __int32 *v12; // [rsp+88h] [rbp+10h]

  v2 = 0;
  if ( _InterlockedIncrement(a1 + 56) == 2 )
  {
    v3 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
    if ( *(int *)(v3 + 4) <= 4 )
      goto LABEL_12;
    v12 = a1;
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    v10[0] = a1;
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
    v10[1] = a1 - 2;
    v4 = *(_QWORD *)sub_18001F844(&v11, v10);
    CurrentThreadId = GetCurrentThreadId();
    v7 = sub_180008A00(3u, 0, CurrentThreadId, v6, v4);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( a1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
    }
    if ( v7 < 0 )
    {
LABEL_12:
      ++*(_DWORD *)(v3 + 4);
      v2 = sub_18001AD40((__int64)a1);
      --*(_DWORD *)(v3 + 4);
    }
  }
  return v2;
}
