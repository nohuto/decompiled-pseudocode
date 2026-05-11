/*
 * XREFs of PropertyGetSetChannelConfiguration @ 0x1C00197E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00070A0 (_guard_dispatch_icall_nop.c)
 *     DeviceRequestPowerUp @ 0x1C0013720 (DeviceRequestPowerUp.c)
 *     QueuePropertyRequest @ 0x1C001A940 (QueuePropertyRequest.c)
 */

__int64 __fastcall PropertyGetSetChannelConfiguration(PIRP Irp, __int64 a2, _DWORD *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // r8
  unsigned int v8; // edx
  PIRP *Context; // r15
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  v8 = -1073741637;
  if ( !FilterFromIrp )
    return v8;
  Context = (PIRP *)FilterFromIrp->Context;
  v10 = *(unsigned int *)(a2 + 24);
  v11 = (__int64)FilterFromIrp->Descriptor->NodeDescriptors + 152 * v10;
  v12 = *(_QWORD *)(v11 + 128);
  if ( *((_DWORD *)&Context[2][2].Overlay.AllocationSize + 2) == 1 )
  {
    if ( (*(_DWORD *)(a2 + 20) & 3) == 1 )
    {
      v8 = 0;
      *a3 = *(_DWORD *)(*(_QWORD *)(v12 + 32) + 4LL * (unsigned int)(*(_DWORD *)(v12 + 24) - 1));
    }
    else if ( (*(_DWORD *)(a2 + 20) & 3) == 2 )
    {
      v14 = 0;
      if ( *(_DWORD *)(v12 + 20) )
      {
        while ( 1 )
        {
          v15 = v14 + 1;
          v16 = v14;
          v17 = *(_QWORD *)(v12 + 32);
          v19 = v15;
          if ( *a3 == *(_DWORD *)(v17 + 4 * v16) )
          {
            LOBYTE(v7) = 1;
            v8 = (*(__int64 (__fastcall **)(PIRP *, __int64, __int64, __int64, unsigned int *, int))(v11 + 136))(
                   Context,
                   v11,
                   v7,
                   2LL,
                   &v19,
                   1);
            if ( (v8 & 0x80000000) == 0 )
              break;
          }
          v14 = v15;
          if ( v15 >= *(_DWORD *)(v12 + 20) )
            return v8;
        }
        v18 = v19;
        *(_DWORD *)(v12 + 24) = v19;
        *(_DWORD *)(v11 + 88) = *(_DWORD *)(*(_QWORD *)(v12 + 32) + 4LL * (v18 - 1));
      }
    }
    return v8;
  }
  if ( DeviceRequestPowerUp(Context, 3221225659LL, v7, v10) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
