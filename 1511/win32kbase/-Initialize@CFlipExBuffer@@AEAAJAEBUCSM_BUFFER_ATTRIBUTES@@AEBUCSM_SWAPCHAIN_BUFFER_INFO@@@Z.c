/*
 * XREFs of ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C003E2F0
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0072420 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     GreDwmDesktopOverlaysEnabled_0 @ 0x1C0001AC8 (GreDwmDesktopOverlaysEnabled_0.c)
 *     ?Create@CRegion@@SAJPEAPEAV1@@Z @ 0x1C003DA74 (-Create@CRegion@@SAJPEAPEAV1@@Z.c)
 *     ?SetFullRegion@CRegion@@QEAAXXZ @ 0x1C003ECBC (-SetFullRegion@CRegion@@QEAAXXZ.c)
 *     ?Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z @ 0x1C004D4A4 (-Create@CBufferRealization@@SAJAEBUCSM_REALIZATION_INFO@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     UserIsCurrentProcessImmersive @ 0x1C00B2310 (UserIsCurrentProcessImmersive.c)
 */

__int64 __fastcall CFlipExBuffer::Initialize(
        struct CRegion **this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // r14
  __int64 v8; // xmm1_8
  CRegion **v9; // r15
  struct _OBJECT_TYPE *v11; // rax
  _QWORD v12[4]; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+70h] [rbp+20h] BYREF

  v6 = CRegion::Create(this + 37);
  if ( v6 >= 0 )
  {
    *((_OWORD *)this + 3) = *(_OWORD *)a2;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_OWORD *)this + 10) = *((_OWORD *)a2 + 7);
    *((_OWORD *)this + 11) = *((_OWORD *)a2 + 8);
    *((_OWORD *)this + 12) = *((_OWORD *)a2 + 9);
    this[26] = (struct CRegion *)*((_QWORD *)a2 + 20);
    *((_DWORD *)this + 42) = *((_DWORD *)a2 + 30)
                          && *((_DWORD *)a2 + 13)
                          && ((unsigned int)GreDwmDesktopOverlaysEnabled_0()
                           || (unsigned int)UserIsCurrentProcessImmersive()
                           || *((_DWORD *)a2 + 31));
    *((_BYTE *)this + 397) = *((_DWORD *)a3 + 6) != 0;
    if ( !*((_DWORD *)a2 + 16) || *((_QWORD *)a3 + 1) )
    {
      v6 = ObReferenceObjectByHandle(*((HANDLE *)a3 + 1), 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL);
      this[43] = (struct CRegion *)Object;
    }
    if ( v6 >= 0 )
    {
      if ( !*((_DWORD *)a2 + 16) || *((_QWORD *)a3 + 2) )
      {
        v11 = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C0104350)();
        v6 = ObReferenceObjectByHandle(*((HANDLE *)a3 + 2), 0x1F0000u, v11, 1, &Object, 0LL);
        this[45] = (struct CRegion *)Object;
      }
      if ( v6 >= 0 )
      {
        LODWORD(v12[0]) = 2;
        memset((char *)v12 + 4, 0, 28);
        v7 = 0LL;
        do
        {
          if ( (unsigned int)v7 >= *((_DWORD *)a3 + 7) )
            break;
          HIDWORD(v12[0]) = v7;
          v8 = *((_QWORD *)a3 + 3 * v7 + 6);
          *(_OWORD *)&v12[1] = *(_OWORD *)((char *)a3 + 24 * v7 + 32);
          v12[3] = v8;
          v6 = CBufferRealization::Create(
                 (const struct CSM_REALIZATION_INFO *)v12,
                 (struct CBufferRealization **)&Object);
          if ( v6 >= 0 )
          {
            v9 = (CRegion **)Object;
            v6 = (*((__int64 (__fastcall **)(struct CRegion **, PVOID))*this + 20))(this, Object);
            if ( v6 < 0 )
            {
              if ( v9 )
                (*(void (__fastcall **)(CRegion **, __int64))*v9)(v9, 1LL);
            }
            else
            {
              CRegion::SetFullRegion(v9[8]);
            }
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( v6 >= 0 );
        if ( v6 >= 0 )
          this[42] = *(struct CRegion **)a3;
      }
    }
  }
  return (unsigned int)v6;
}
