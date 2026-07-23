/*
 * XREFs of PiDevCfgFreeDriverNode @ 0x140638DD0
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140632C24 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFreeDriverNode @ 0x140638DD0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C2F0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140641768 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     PiDevCfgFreeDriverNode @ 0x140638DD0 (PiDevCfgFreeDriverNode.c)
 */

void __fastcall PiDevCfgFreeDriverNode(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 **v5; // rdi
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 **v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx

  v2 = (__int64 **)(a1 + 208);
  while ( *v2 != (__int64 *)v2 )
  {
    v3 = *v2;
    v4 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v4 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v2;
    PiDevCfgFreeDriverNode(v3);
  }
  v5 = (__int64 **)(a1 + 192);
  while ( *v5 != (__int64 *)v5 )
  {
    v6 = *v5;
    v7 = **v5;
    if ( (__int64 **)(*v5)[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
      __fastfail(3u);
    *v5 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v5;
    PiDevCfgFreeDriverNode(v6);
  }
  v8 = (__int64 **)(a1 + 352);
  while ( *v8 != (__int64 *)v8 )
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    PiDevCfgFreeDriverNode(v9);
  }
  v11 = *(void **)(a1 + 16);
  if ( v11 )
    ZwClose(v11);
  v12 = *(void **)(a1 + 24);
  if ( v12 )
    ZwClose(v12);
  v13 = *(void **)(a1 + 32);
  if ( v13 )
    ZwClose(v13);
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 56));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 40));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 72));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 88));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 128));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 144));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 240));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 256));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 272));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 376));
  ExFreePoolWithTag((PVOID)a1, 0);
}
