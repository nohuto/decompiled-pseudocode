/*
 * XREFs of ?bUnreferenceNetworkedFontFileNode@@YA_NPEAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1C027E3EC
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027DCD8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

char __fastcall bUnreferenceNetworkedFontFileNode(HANDLE *Buffer)
{
  char v2; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_QWORD *)gpxsGlobals;
  GreAcquireSemaphore(v5);
  v2 = 0;
  if ( (*((_DWORD *)Buffer + 2))-- == 1 )
  {
    if ( *Buffer )
    {
      ZwClose(*Buffer);
      *Buffer = 0LL;
    }
    RtlDeleteElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), Buffer);
    v2 = 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  return v2;
}
