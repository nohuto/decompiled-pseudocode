/*
 * XREFs of EtwTiLogSetContextThread @ 0x1406A5E6C
 * Callers:
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x1404FC310 (PspWow64SetContextThread.c)
 * Callees:
 *     EtwProviderEnabled @ 0x1400B54FC (EtwProviderEnabled.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpTiFillProcessIdentity @ 0x140171E6C (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x140171F18 (EtwpTiFillThreadIdentity.c)
 *     EtwpTiVadQueryEventWrite @ 0x140228DC0 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiParseContextRecord @ 0x1406A63A0 (EtwpTiParseContextRecord.c)
 */

void __fastcall EtwTiLogSetContextThread(char a1, __int64 a2, __int64 a3, unsigned int a4)
{
  char v7; // di
  _KPROCESS *v8; // r14
  _KPROCESS *Process; // rbx
  const EVENT_DESCRIPTOR *v10; // rsi
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // eax
  REGHANDLE v15; // r15
  unsigned int v16; // ebx
  __int16 v17; // ax
  _BYTE *v18; // r8
  __int64 v19; // rcx
  char v20; // dl
  unsigned int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32[38]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[96]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v34; // [rsp+388h] [rbp+288h] BYREF

  v34 = a4;
  v7 = 0;
  if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xC000uLL) )
  {
    v8 = *(_KPROCESS **)(a2 + 544);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v8 )
    {
      v10 = (const EVENT_DESCRIPTOR *)&THREATINT_SETTHREADCONTEXT_REMOTE_KERNEL_CALLER;
      if ( a1 )
        v10 = &THREATINT_SETTHREADCONTEXT_REMOTE;
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v10) )
      {
        v11 = EtwpTiFillProcessIdentity((__int64)v32, (__int64)Process, &v30);
        v12 = EtwpTiFillThreadIdentity((__int64)&v32[v11], (__int64)KeGetCurrentThread()) + v11;
        v13 = EtwpTiFillProcessIdentity((__int64)&v32[v12], (__int64)v8, &v31) + v12;
        v14 = EtwpTiFillThreadIdentity((__int64)&v32[v13], a2);
        v15 = EtwThreatIntProvRegHandle;
        v16 = v14 + v13;
        if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x4000000uLL) )
        {
          v17 = EtwpTiParseContextRecord(v33, v34, a3);
          v18 = v33;
          v19 = v16;
          LOWORD(v29) = v17;
          v20 = v17;
          v21 = v16 + 1;
          v32[v19].Ptr = (ULONGLONG)&v34;
          *(_QWORD *)&v32[v19].Size = 4LL;
          v22 = v21;
          v23 = v21 + 1;
          v32[v22].Ptr = (ULONGLONG)&v29;
          *(_QWORD *)&v32[v22].Size = 2LL;
          v24 = 12LL;
          do
          {
            v25 = v23++;
            v25 *= 2LL;
            *(&v32[0].Ptr + v25) = (ULONGLONG)v18;
            v18 += 8;
            *((_QWORD *)&v32[0].Size + v25) = 8LL;
            --v24;
          }
          while ( v24 );
          v15 = EtwThreatIntProvRegHandle;
        }
        else
        {
          v26 = v16;
          v20 = 0;
          LOWORD(v29) = 0;
          v23 = v16 + 1;
          v27 = 12LL;
          v32[v26].Ptr = (ULONGLONG)&unk_140261F70;
          *(_QWORD *)&v32[v26].Size = 2LL;
          do
          {
            v28 = v23++;
            v28 *= 2LL;
            *(&v32[0].Ptr + v28) = (ULONGLONG)&unk_140261F70;
            *((_QWORD *)&v32[0].Size + v28) = 8LL;
            --v27;
          }
          while ( v27 );
        }
        if ( (v20 & 1) != 0 )
        {
          if ( EtwProviderEnabled(v15, 0, 0x8000000uLL) )
            v7 = 1;
        }
        EtwpTiVadQueryEventWrite(v32, 0x26u, v23, v8, v33, 1u, v10, v7, v29);
      }
    }
  }
}
