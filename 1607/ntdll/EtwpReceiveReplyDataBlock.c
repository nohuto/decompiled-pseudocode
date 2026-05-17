/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x180002768
 * Callers:
 *     EtwSendNotification @ 0x180059D00 (EtwSendNotification.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(
        int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v8; // edi
  ULONG v9; // r10d
  char v10; // r15
  int v11; // esi
  _DWORD *v12; // r14
  int v14; // r13d
  __int64 v15; // rbp
  __int64 v16; // rbx
  NTSTATUS v17; // r8d
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  ULONG v21; // eax
  _DWORD v22[18]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+8h] BYREF
  char v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v8 = 0;
  v22[0] = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  if ( a4 )
  {
    v14 = a6;
    v15 = a5;
    while ( 1 )
    {
      v22[1] = a2;
      v16 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
      v17 = ((__int64 (__fastcall *)(__int64, _DWORD *, __int64, __int64, int, unsigned int *))NtTraceControl)(
              19LL,
              v22,
              8LL,
              v15,
              v14,
              &v23);
      v18 = ((((unsigned __int64)MEMORY[0x7FFE0004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64)
          - v16;
      if ( a2 <= v18 )
        return 1460;
      a2 -= v18;
      v19 = (v23 + 7) & 0xFFFFFFF8;
      v23 = v19;
      if ( !v17 )
        break;
      v21 = RtlNtStatusToDosError(v17);
      v9 = v21;
      if ( !v21 )
      {
        v19 = v23;
        goto LABEL_6;
      }
      if ( v21 != 122 )
        goto LABEL_10;
      v11 += v23;
      v10 = 1;
LABEL_9:
      if ( ++v8 >= v25 )
        goto LABEL_10;
    }
    v9 = 0;
LABEL_6:
    if ( !v24 )
    {
      v12 = (_DWORD *)(v15 + 8);
      *(_DWORD *)(v15 + 8) = v19;
      v19 = v23;
      v15 += v23;
      v14 -= v23;
    }
    v11 += v19;
    goto LABEL_9;
  }
LABEL_10:
  *a7 = v8;
  *a8 = v11;
  if ( v12 )
    *v12 = 0;
  if ( !v9 && v10 )
    return 122;
  return v9;
}
