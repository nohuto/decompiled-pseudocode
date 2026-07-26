/*
 * XREFs of ?ndisNblTrackerPrintComponentNameToDebugger@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0060658
 * Callers:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00605F0 (-ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisNblTrackerPrintComponentNameToDebugger(struct _NDIS_NBL_TRACKER *a1)
{
  const _UNICODE_STRING *Name; // rdx
  __int64 v3; // rdi
  wchar_t v4; // dx

  if ( a1->Name )
  {
    DbgPrint("Component: \"");
    Name = a1->Name;
    v3 = 0LL;
    if ( (Name->Length & 0xFFFE) != 0 )
    {
      do
      {
        v4 = Name->Buffer[v3];
        if ( (unsigned __int16)(v4 - 32) > 0x5Eu )
          DbgPrint("?");
        else
          DbgPrint("%c", (unsigned int)(char)v4);
        Name = a1->Name;
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < Name->Length >> 1 );
    }
    DbgPrint("\"  (run \"du %p\")\n", a1->Name->Buffer);
  }
  if ( *((_WORD *)a1 + 8) )
  {
    switch ( *((_WORD *)a1 + 8) )
    {
      case 1:
        DbgPrint("!ndiskd.filter %p\n");
        break;
      case 2:
        DbgPrint("!ndiskd.mopen %p\n");
        break;
      case 3:
        DbgPrint("No pause on suspend receive return queue, on behalf of !ndiskd.miniport %p\n");
        break;
      case 4:
        DbgPrint("Selective suspend send queue, on behalf of !ndiskd.miniport %p\n");
        break;
      case 5:
        DbgPrint("Selective suspend receive return queue, on behalf of !ndiskd.miniport %p\n");
        break;
      default:
        if ( a1->Context )
          DbgPrint("Context: %p\n");
        break;
    }
  }
  else
  {
    DbgPrint("!ndiskd.miniport %p\n");
  }
}
