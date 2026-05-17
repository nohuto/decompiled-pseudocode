/*
 * XREFs of EtwSendNotification @ 0x180059D00
 * Callers:
 *     <none>
 * Callees:
 *     EtwpReceiveReplyDataBlock @ 0x180002768 (EtwpReceiveReplyDataBlock.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 */

__int64 __fastcall EtwSendNotification(__int64 a1, int a2, char *a3, _DWORD *a4, _DWORD *a5)
{
  char v5; // bp
  unsigned int v8; // esi
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  unsigned int v14; // r9d
  void *v15; // rbp
  char v16; // r8
  _BYTE v17[8]; // [rsp+40h] [rbp-C8h] BYREF
  char v18; // [rsp+48h] [rbp-C0h] BYREF

  v5 = *(_BYTE *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 16);
  if ( v5 == 1 && !v8 )
    v8 = 60000;
  v11 = NtTraceControl(17LL, a1, *(unsigned int *)(a1 + 4), a1, 72, v17);
  if ( v11 )
    v12 = RtlNtStatusToDosError(v11);
  else
    v12 = 0;
  if ( v5 )
  {
    v14 = *(_DWORD *)(a1 + 20);
    if ( !v12 )
    {
      if ( v14 )
      {
        v15 = *(void **)(a1 + 24);
        v16 = 0;
        if ( *(_DWORD *)a1 == 3 )
        {
          v16 = 1;
          a3 = &v18;
          a2 = 120;
        }
        v12 = EtwpReceiveReplyDataBlock((int)v15, v8, v16, v14, (__int64)a3, a2, a4, a5);
        if ( v15 )
          NtClose(v15);
      }
    }
  }
  return v12;
}
