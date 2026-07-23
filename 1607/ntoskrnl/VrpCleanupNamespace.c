/*
 * XREFs of VrpCleanupNamespace @ 0x140612ED4
 * Callers:
 *     VrpJobContextDelete @ 0x140612F38 (VrpJobContextDelete.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140614240 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     VrpDestroyNamespaceNodeList @ 0x140614CB4 (VrpDestroyNamespaceNodeList.c)
 *     VrpUnloadDifferencingHive @ 0x14061792C (VrpUnloadDifferencingHive.c)
 */

void __fastcall VrpCleanupNamespace(__int64 a1)
{
  _WORD *v2; // rbx
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(a1 + 84) = 1;
  VrpDestroyNamespaceNodeList();
  while ( 1 )
  {
    v2 = *(_WORD **)(a1 + 24);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)v2;
    String1.Buffer = v2 + 5;
    String1.MaximumLength = v2[4];
    String1.Length = String1.MaximumLength;
    VrpUnloadDifferencingHive(&String1);
    ExFreePoolWithTag(v2, 0x67655256u);
  }
}
