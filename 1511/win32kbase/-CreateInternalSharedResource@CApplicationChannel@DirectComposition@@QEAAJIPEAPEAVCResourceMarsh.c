/*
 * XREFs of ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001B87C
 * Callers:
 *     NtDCompositionCreateResource @ 0x1C0019C90 (NtDCompositionCreateResource.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z @ 0x1C001D2F4 (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJIHPEAI@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C001B61C (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C001F5D0 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C0071FC8 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     GetSharedResourceData @ 0x1C00766AC (GetSharedResourceData.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007700C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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
  _BYTE v10[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall *v11)(char *, _QWORD, PVOID *); // [rsp+58h] [rbp-1h]
  int v12; // [rsp+60h] [rbp+7h] BYREF
  __int64 v13; // [rsp+68h] [rbp+Fh]
  __int64 v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  PVOID v16; // [rsp+80h] [rbp+27h]
  __int64 v17; // [rsp+88h] [rbp+2Fh]
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v4 = a2;
  if ( (unsigned __int8)GetSharedResourceData(a2, v10) )
  {
    v6 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000LL, &Object);
    if ( v6 >= 0 )
    {
      v7 = Object;
      Handle = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v17 = 0LL;
      v12 = 48;
      v15 = 512;
      v16 = Object;
      v6 = CompositionObject::Create(
             0LL,
             &v12,
             3LL,
             0LL,
             2,
             48,
             DirectComposition::ResourceObject::ObjectInit,
             v4,
             &Handle);
      if ( v6 >= 0 )
      {
        v6 = DirectComposition::ResourceObject::ResolveHandle(
               Handle,
               3u,
               0,
               (struct DirectComposition::ResourceObject **)&Object);
        if ( v6 >= 0 )
        {
          GetSharedResourceData((unsigned int)v4, v10);
          v8 = Object;
          if ( v11 )
          {
            v6 = v11((char *)Object + 24, (unsigned int)v4, &Object);
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
