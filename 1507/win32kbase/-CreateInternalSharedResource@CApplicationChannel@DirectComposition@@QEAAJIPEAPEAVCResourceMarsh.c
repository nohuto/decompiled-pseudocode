/*
 * XREFs of ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E658
 * Callers:
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z @ 0x1C00300F4 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z.c)
 * Callees:
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C000FC10 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     GetSharedResourceData @ 0x1C0013E50 (GetSharedResourceData.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001485C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C002E3F8 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C0032F10 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        PVOID *a3)
{
  __int64 v4; // rdi
  int v6; // ebx
  PVOID v7; // r15
  PVOID v8; // rsi
  __int64 v10; // [rsp+28h] [rbp-31h]
  __int64 (__fastcall *v11)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **); // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall *v12)(char *, _QWORD, PVOID *); // [rsp+58h] [rbp-1h]
  int v13; // [rsp+60h] [rbp+7h] BYREF
  __int64 v14; // [rsp+68h] [rbp+Fh]
  __int64 v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  PVOID v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v4 = a2;
  if ( GetSharedResourceData(a2, &v11) )
  {
    v6 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000LL, &Object);
    if ( v6 >= 0 )
    {
      v7 = Object;
      Handle = 0LL;
      v14 = 0LL;
      v15 = 0LL;
      v18 = 0LL;
      LODWORD(v10) = 48;
      v13 = 48;
      v16 = 512;
      v17 = Object;
      v6 = CompositionObject::Create(
             0LL,
             (__int64)&v13,
             3u,
             0LL,
             2,
             v10,
             (__int64 (__fastcall *)(_QWORD, __int64, __int64))DirectComposition::ResourceObject::ObjectInit,
             v4,
             &Handle);
      if ( v6 >= 0 )
      {
        v6 = DirectComposition::ResourceObject::ResolveHandle(
               Handle,
               3LL,
               0LL,
               (struct DirectComposition::ResourceObject **)&Object);
        if ( v6 >= 0 )
        {
          GetSharedResourceData(v4, &v11);
          v8 = Object;
          if ( v12 )
          {
            v6 = v12((char *)Object + 24, (unsigned int)v4, &Object);
            if ( v6 >= 0 )
            {
              v6 = DirectComposition::CApplicationChannel::RegisterResource(
                     this,
                     (struct DirectComposition::CResourceMarshaler *)Object);
              if ( v6 < 0 )
              {
                if ( Object )
                  (*(void (__fastcall **)(PVOID, __int64))(*(_QWORD *)Object + 96LL))(Object, 1LL);
              }
              else
              {
                *a3 = Object;
              }
            }
          }
          else
          {
            v6 = -1073741811;
          }
          ObfDereferenceObject(v8);
        }
        ObCloseHandle(Handle, 0);
      }
      Win32FreePool(v7);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
