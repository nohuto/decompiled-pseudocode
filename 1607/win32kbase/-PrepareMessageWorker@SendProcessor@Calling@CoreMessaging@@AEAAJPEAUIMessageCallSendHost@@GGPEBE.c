/*
 * XREFs of ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C0079AA0
 * Callers:
 *     ?ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@PEAPEBEIIIIPEAI@Z @ 0x1C0079C94 (-ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z @ 0x1C00F9A84 (-Error@FailFast@Calling@CoreMessaging@@SAXPEBDI@Z.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareMessageWorker(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int8 *a5)
{
  _DWORD *v5; // r9
  int v7; // r10d
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned __int8 *v10; // rax
  int v11; // ecx
  int v12; // edx
  __int16 v13; // cx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  char *v17; // rax
  char v18; // cl

  v5 = (_DWORD *)((char *)this + 120);
  *(_QWORD *)this = a5;
  *((_QWORD *)this + 16) = a2;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 30) = 0;
  v7 = 0;
  *((_DWORD *)this + 31) = -1;
  v8 = *a5;
  *((_DWORD *)this + 20) = v8;
  *(_QWORD *)this = a5 + 1;
  if ( v8 > 0x10 )
  {
    *v5 = 204;
    goto LABEL_17;
  }
  *((_QWORD *)this + 1) = a5 + 1;
  v9 = 8;
  *((_DWORD *)this + 31) = 0;
  if ( v8 )
  {
    do
    {
      v10 = (unsigned __int8 *)*((_QWORD *)this + 1);
      *((_DWORD *)this + 21) = 0;
      v11 = *v10;
      *((_QWORD *)this + 1) = v10 + 1;
      if ( v11 <= 9 )
      {
        if ( v11 != 9 )
        {
          if ( v11 == 1 )
            goto LABEL_31;
          if ( v11 == 2 )
            goto LABEL_30;
          if ( v11 != 3 )
          {
            switch ( v11 )
            {
              case 4:
                goto LABEL_33;
              case 5:
LABEL_31:
                *((_DWORD *)this + 21) = 1;
                goto LABEL_11;
              case 6:
LABEL_30:
                *((_DWORD *)this + 21) = 2;
                goto LABEL_11;
            }
            if ( v11 != 7 )
            {
              if ( v11 != 8 )
                goto LABEL_37;
LABEL_33:
              *((_DWORD *)this + 21) = 8;
              goto LABEL_11;
            }
          }
        }
        *((_DWORD *)this + 21) = 4;
      }
      else
      {
        switch ( v11 )
        {
          case 10:
            goto LABEL_33;
          case 11:
            goto LABEL_30;
          case 12:
            goto LABEL_31;
          case 13:
            if ( !is_mul_ok(2uLL, 0x201uLL) )
            {
              *v5 = 106;
              v7 = -2147024809;
              goto LABEL_17;
            }
            *((_DWORD *)this + 21) = 1026;
            break;
          case 14:
            v12 = v10[1];
            *((_QWORD *)this + 1) = v10 + 2;
            v13 = v10[2];
            *((_QWORD *)this + 1) = v10 + 3;
            *((_DWORD *)this + 21) = v12 | (unsigned __int16)(v13 << 8);
            break;
          case 15:
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x2E0uLL);
          case 16:
            CoreMessaging::Calling::FailFast::Error(
              (ULONG_PTR)"mincore\\coreui\\dev\\calling\\sendprocessor.cpp",
              0x2EDuLL);
          default:
LABEL_37:
            *v5 = 205;
            goto LABEL_17;
        }
        v7 = 0;
      }
LABEL_11:
      *((_DWORD *)this + *((unsigned int *)this + 31) + 4) = *((_DWORD *)this + 21);
      v14 = *((_DWORD *)this + 21);
      if ( v14 > 0xFFFFFFFC || (v15 = (v14 + 3) & 0xFFFFFFFC, v16 = v15 + 4, v15 + 4 < v15) || v16 + v9 < v9 )
      {
        *v5 = 106;
        goto LABEL_17;
      }
      ++*((_DWORD *)this + 31);
      v9 += v16;
    }
    while ( *((_DWORD *)this + 31) < *((_DWORD *)this + 20) );
  }
  v17 = (char *)*((_QWORD *)this + 1);
  v18 = *v17;
  *((_QWORD *)this + 1) = v17 + 1;
  if ( v18 )
  {
    *v5 = 203;
  }
  else
  {
    *((_DWORD *)this + 34) = v9;
    v7 = 0;
  }
LABEL_17:
  if ( *v5 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), v5);
    if ( v7 >= 0 )
      return (unsigned int)-2147024809;
  }
  return (unsigned int)v7;
}
