/*
 * XREFs of RtlpFreeActivationContextStackFrame @ 0x180063C28
 * Callers:
 *     RtlFreeActivationContextStack @ 0x180063A40 (RtlFreeActivationContextStack.c)
 *     RtlDeactivateActivationContext @ 0x180063B20 (RtlDeactivateActivationContext.c)
 * Callees:
 *     RtlRaiseException @ 0x180011EA0 (RtlRaiseException.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

void __fastcall RtlpFreeActivationContextStackFrame(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  int v6; // eax
  int v7; // eax
  _QWORD *v8; // rax
  unsigned __int64 *ExceptionInformation; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-79h] BYREF

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 16) & 4) == 0 )
    {
      v3 = a1 + 8;
      v4 = *(_QWORD **)(a1 + 8);
      if ( v4 != (_QWORD *)(a1 + 8) )
      {
        while ( 1 )
        {
          v5 = v4 - 1;
          if ( *((_DWORD *)v4 - 2) != 1953721414 )
          {
            ExceptionRecord.ExceptionRecord = 0LL;
            ExceptionRecord.NumberParameters = 4;
            ExceptionRecord.ExceptionInformation[0] = 1LL;
            ExceptionRecord.ExceptionInformation[1] = 1LL;
            ExceptionRecord.ExceptionInformation[2] = v3;
            ExceptionRecord.ExceptionInformation[3] = (unsigned __int64)(v4 - 1);
            ExceptionRecord.ExceptionCode = -1072365547;
            ExceptionRecord.ExceptionFlags = 1;
            RtlRaiseException(&ExceptionRecord);
          }
          if ( *((_DWORD *)v5 + 7) != ~*((_DWORD *)v5 + 1) )
          {
            ExceptionRecord.ExceptionRecord = 0LL;
            ExceptionInformation = ExceptionRecord.ExceptionInformation;
            ExceptionRecord.NumberParameters = 4;
            v10 = 1LL;
            v11 = 2LL;
            do
            {
              *ExceptionInformation++ = v10++;
              --v11;
            }
            while ( v11 );
            ExceptionRecord.ExceptionInformation[2] = v3;
            ExceptionRecord.ExceptionInformation[3] = (unsigned __int64)(v4 - 1);
            ExceptionRecord.ExceptionCode = -1072365547;
            ExceptionRecord.ExceptionFlags = 1;
            RtlRaiseException(&ExceptionRecord);
          }
          if ( a2 >= (unsigned __int64)(v5 + 4) && a2 < (unsigned __int64)(v5 + 388) )
            break;
          v4 = (_QWORD *)*v4;
          if ( v4 == (_QWORD *)v3 )
            return;
        }
        if ( (_QWORD *)a2 == &v5[12 * (unsigned int)(((int)a2 - (int)v5 - 32) / 96) + 4] )
        {
          v6 = *((_DWORD *)v5 + 1);
          if ( v6 )
          {
            v7 = v6 - 1;
            *((_DWORD *)v5 + 1) = v7;
            *((_DWORD *)v5 + 7) = ~v7;
            *(_DWORD *)(a2 + 16) = 4;
            if ( !*((_DWORD *)v5 + 1) )
            {
              v8 = (_QWORD *)v4[1];
              if ( v8 != (_QWORD *)v3 )
              {
                do
                {
                  v12 = (_QWORD *)v8[1];
                  if ( !*((_DWORD *)v8 - 1) )
                  {
                    v13 = *v8;
                    if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v12 != v8 )
                      __fastfail(3u);
                    *v12 = v13;
                    *(_QWORD *)(v13 + 8) = v12;
                    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8 - 1);
                  }
                  v8 = v12;
                }
                while ( v12 != (_QWORD *)v3 );
              }
            }
          }
        }
      }
    }
  }
}
