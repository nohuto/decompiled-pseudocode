/*
 * XREFs of PiDevCfgFreeDriverNode @ 0x140587BE8
 * Callers:
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PiDevCfgFreeDriverNode @ 0x140587BE8 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x140588D38 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140682C5C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140688A94 (PiDevCfgQueryIncludedDriverNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14068CF4C (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PiDevCfgFreeDriverNode @ 0x140587BE8 (PiDevCfgFreeDriverNode.c)
 */

void __fastcall PiDevCfgFreeDriverNode(__int64 a1)
{
  __int64 **v2; // rdi
  __int64 **v3; // rdi
  __int64 **v4; // rdi
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax

  v2 = (__int64 **)(a1 + 208);
  while ( *v2 != (__int64 *)v2 )
  {
    v8 = *v2;
    v9 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v2 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v2;
    PiDevCfgFreeDriverNode(v8);
  }
  v3 = (__int64 **)(a1 + 192);
  while ( *v3 != (__int64 *)v3 )
  {
    v10 = *v3;
    v11 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v3 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v3;
    PiDevCfgFreeDriverNode(v10);
  }
  v4 = (__int64 **)(a1 + 352);
  while ( *v4 != (__int64 *)v4 )
  {
    v12 = *v4;
    v13 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v13 + 8) != v12 )
      __fastfail(3u);
    *v4 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v4;
    PiDevCfgFreeDriverNode(v12);
  }
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    ZwClose(v5);
  v6 = *(void **)(a1 + 24);
  if ( v6 )
    ZwClose(v6);
  v7 = *(void **)(a1 + 32);
  if ( v7 )
    ZwClose(v7);
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
