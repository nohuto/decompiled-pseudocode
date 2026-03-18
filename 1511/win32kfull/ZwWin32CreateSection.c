/*
 * XREFs of ZwWin32CreateSection @ 0x1C00A4F4C
 * Callers:
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00A68E4 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00D9028 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C027DCD8 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     ZwWin32CreateSectionRetainHandle @ 0x1C01D398C (ZwWin32CreateSectionRetainHandle.c)
 */

__int64 __fastcall ZwWin32CreateSection(int a1, int a2, int a3, int a4, ULONG a5, int a6, void *a7, HANDLE Handle)
{
  int v8; // ebx
  int v10; // [rsp+28h] [rbp-30h]
  void *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  v8 = ZwWin32CreateSectionRetainHandle(a1, a2, a3, a4, a5, v10, a7, v11, v12, &Handle);
  if ( v8 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v8;
}
