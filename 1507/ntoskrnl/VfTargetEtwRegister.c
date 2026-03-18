/*
 * XREFs of VfTargetEtwRegister @ 0x140745840
 * Callers:
 *     VerifierEtwRegister @ 0x14075498C (VerifierEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x1407549C0 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

void __fastcall VfTargetEtwRegister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  _QWORD *PoolWithTag; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfSafeMode )
  {
    v4 = 0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x54456656u);
    VfAvlInitializeLockContext((__int64)v10, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v10, a2, 1LL);
    if ( v6 )
    {
      v7 = v6[6];
      if ( PoolWithTag )
      {
        if ( v7 )
        {
          PoolWithTag[2] = a1;
          v8 = v7 + 16;
          PoolWithTag[3] = a2;
          v9 = *(_QWORD **)(v8 + 8);
          *PoolWithTag = v8;
          PoolWithTag[1] = v9;
          if ( *v9 != v8 )
            __fastfail(3u);
          *v9 = PoolWithTag;
          v4 = 1;
          *(_QWORD *)(v8 + 8) = PoolWithTag;
        }
      }
      else if ( v7 )
      {
        *(_DWORD *)(v7 + 32) |= 1u;
      }
    }
    VfAvlCleanupLockContext((__int64)v10);
    if ( !v4 )
    {
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x54456656u);
    }
  }
}
