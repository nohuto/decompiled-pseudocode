/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x180001AB0
 * Callers:
 *     EtwSendNotification @ 0x18000EA20 (EtwSendNotification.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x180095360 (NtTraceControl.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(
        int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        _DWORD *OutputBuffer,
        ULONG a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v8; // edi
  ULONG v9; // r10d
  char v10; // r15
  int v11; // esi
  _DWORD *v12; // r14
  ULONG OutputBufferLength; // r13d
  _DWORD *v15; // rbp
  __int64 v16; // rbx
  NTSTATUS v17; // r8d
  unsigned __int64 v18; // rdx
  ULONG v19; // eax
  ULONG v21; // eax
  _DWORD InputBuffer[18]; // [rsp+30h] [rbp-48h] BYREF
  ULONG ReturnLength; // [rsp+80h] [rbp+8h] BYREF
  char v24; // [rsp+90h] [rbp+18h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v24 = a3;
  v8 = 0;
  InputBuffer[0] = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  if ( a4 )
  {
    OutputBufferLength = a6;
    v15 = OutputBuffer;
    while ( 1 )
    {
      InputBuffer[1] = a2;
      v16 = (((unsigned __int64)MEMORY[0x7FFE0004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64;
      v17 = NtTraceControl(EtwReceiveReplyDataBlock, InputBuffer, 8u, v15, OutputBufferLength, &ReturnLength);
      v18 = ((((unsigned __int64)MEMORY[0x7FFE0004] << 32)
            * (unsigned __int128)(unsigned __int64)(MEMORY[0x7FFE0320] << 8)) >> 64)
          - v16;
      if ( a2 <= v18 )
        return 1460;
      a2 -= v18;
      v19 = (ReturnLength + 7) & 0xFFFFFFF8;
      ReturnLength = v19;
      if ( !v17 )
        break;
      v21 = RtlNtStatusToDosError(v17);
      v9 = v21;
      if ( !v21 )
      {
        v19 = ReturnLength;
        goto LABEL_6;
      }
      if ( v21 != 122 )
        goto LABEL_10;
      v11 += ReturnLength;
      v10 = 1;
LABEL_9:
      if ( ++v8 >= v25 )
        goto LABEL_10;
    }
    v9 = 0;
LABEL_6:
    if ( !v24 )
    {
      v12 = v15 + 2;
      v15[2] = v19;
      v19 = ReturnLength;
      v15 = (_DWORD *)((char *)v15 + ReturnLength);
      OutputBufferLength -= ReturnLength;
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
