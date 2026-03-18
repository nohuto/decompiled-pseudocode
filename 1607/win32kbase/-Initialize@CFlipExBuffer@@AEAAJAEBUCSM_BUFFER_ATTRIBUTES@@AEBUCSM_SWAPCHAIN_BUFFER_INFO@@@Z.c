/*
 * XREFs of ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C001E494
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C004AE10 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     GreDwmDesktopOverlaysEnabled_0 @ 0x1C0001AC8 (GreDwmDesktopOverlaysEnabled_0.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C001EDEC (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C001EEB4 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C004B2E4 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z.c)
 *     GreDxgkGetSharedSyncObjectType @ 0x1C007FB80 (GreDxgkGetSharedSyncObjectType.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     UserIsCurrentProcessImmersive @ 0x1C00BC2C0 (UserIsCurrentProcessImmersive.c)
 */

__int64 __fastcall CFlipExBuffer::Initialize(
        struct CRegion **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a3)
{
  NTSTATUS v6; // esi
  void *v7; // rcx
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  unsigned int v9; // r15d
  __int64 v10; // xmm1_8
  CRegion **v11; // r12
  _QWORD v13[4]; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+80h] [rbp+30h] BYREF

  v6 = CRegion::Create(this + 32);
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 97) = (unsigned int)PsGetCurrentProcessId();
    *((_OWORD *)this + 3) = *(_OWORD *)a2;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    this[20] = (struct CRegion *)*((_QWORD *)a2 + 14);
    if ( (*((_BYTE *)a2 + 116) & 0x50) == 0x50
      && ((unsigned int)GreDwmDesktopOverlaysEnabled_0()
       || (unsigned int)UserIsCurrentProcessImmersive()
       || (*((_DWORD *)a2 + 29) & 0x80u) != 0) )
    {
      *((_DWORD *)this + 41) |= 0x40u;
    }
    else
    {
      *((_DWORD *)this + 41) &= ~0x40u;
    }
    v7 = (void *)*((_QWORD *)a3 + 1);
    if ( v7 )
    {
      v6 = ObReferenceObjectByHandle(v7, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
      this[38] = (struct CRegion *)Object;
    }
    if ( v6 >= 0 )
    {
      if ( *((_QWORD *)a3 + 2) )
      {
        SharedSyncObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedSyncObjectType();
        v6 = ObReferenceObjectByHandle(*((HANDLE *)a3 + 2), 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
        this[40] = (struct CRegion *)Object;
      }
      if ( v6 >= 0 )
      {
        memset(v13, 0, sizeof(v13));
        v9 = 0;
        LODWORD(v13[0]) = *((_DWORD *)a3 + 6);
        do
        {
          if ( v9 >= *((_DWORD *)a3 + 7) )
            break;
          HIDWORD(v13[0]) = v9;
          v10 = *((_QWORD *)a3 + 3 * v9 + 6);
          *(_OWORD *)&v13[1] = *(_OWORD *)((char *)a3 + 24 * v9 + 32);
          v13[3] = v10;
          v6 = CBufferRealization::Create(
                 (const struct CSM_REALIZATION_INFO *)v13,
                 (struct CBufferRealization **)&Object);
          if ( v6 >= 0 )
          {
            v11 = (CRegion **)Object;
            v6 = (*((__int64 (__fastcall **)(struct CRegion **, PVOID))*this + 23))(this, Object);
            if ( v6 < 0 )
            {
              if ( v11 )
                (*(void (__fastcall **)(CRegion **, __int64))*v11)(v11, 1LL);
            }
            else
            {
              CRegion::SetFullRegion(v11[8]);
            }
          }
          ++v9;
        }
        while ( v6 >= 0 );
        if ( v6 >= 0 )
        {
          this[37] = *(struct CRegion **)a3;
          *((_BYTE *)this + 384) = *((_DWORD *)a3 + 6) == 4;
        }
      }
    }
  }
  return (unsigned int)v6;
}
