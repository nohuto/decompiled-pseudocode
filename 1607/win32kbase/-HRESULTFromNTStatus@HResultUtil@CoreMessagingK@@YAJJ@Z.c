/*
 * XREFs of ?HRESULTFromNTStatus@HResultUtil@CoreMessagingK@@YAJJ@Z @ 0x1C00F89B0
 * Callers:
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXII1@Z @ 0x1C00F86C0 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXII1@Z.c)
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z @ 0x1C00F87D0 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAPEAXIPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::HResultUtil::HRESULTFromNTStatus(CoreMessagingK::HResultUtil *this)
{
  unsigned int v1; // ebx
  int v2; // edi
  signed int v3; // eax

  v1 = 0;
  v2 = (int)this;
  if ( (int)this < 0 )
  {
    if ( (_DWORD)this == -1073741559 )
    {
      return (unsigned int)-2147024579;
    }
    else
    {
      v3 = RtlNtStatusToDosError((NTSTATUS)this);
      if ( !v3 || v3 == 317 )
      {
        return v2 | 0x10000000u;
      }
      else if ( v3 > 0 )
      {
        return (unsigned __int16)v3 | 0x80070000;
      }
      else
      {
        return (unsigned int)v3;
      }
    }
  }
  return v1;
}
