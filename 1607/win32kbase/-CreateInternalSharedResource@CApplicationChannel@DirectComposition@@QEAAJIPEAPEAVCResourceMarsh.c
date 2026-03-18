/*
 * XREFs of ?CreateInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C0040750
 * Callers:
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C004121C (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x1C003A440 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00405E0 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEAXPEAPEAVICompositionObject@@@Z3PEAPEAX@Z @ 0x1C00483A4 (-Create@CompositionObject@@KAJDPEAU_OBJECT_ATTRIBUTES@@KDW4CompositionObjectType@@KP6AJPEAU1@PEA.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00485A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     GetSharedResourceData @ 0x1C007A060 (GetSharedResourceData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateInternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        unsigned int a2,
        PVOID *a3)
{
  __int64 v4; // rdi
  int v6; // ebx
  PVOID v7; // rsi
  _BYTE v9[8]; // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall *v10)(char *, _QWORD, PVOID *); // [rsp+58h] [rbp-1h]
  int v11; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+68h] [rbp+Fh]
  __int64 v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  PVOID v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+7Fh] BYREF

  *a3 = 0LL;
  v4 = a2;
  if ( (unsigned __int8)GetSharedResourceData(a2, v9) )
  {
    v6 = UserAllocDefaultCompositionSecurityDescriptor(0x80000000, (__int64 *)&Object);
    if ( v6 >= 0 )
    {
      Handle = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v16 = 0LL;
      v11 = 48;
      v14 = 512;
      v15 = Object;
      v6 = CompositionObject::Create(
             0LL,
             &v11,
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
          GetSharedResourceData((unsigned int)v4, v9);
          v7 = Object;
          if ( v10 )
          {
            v6 = v10((char *)Object + 24, (unsigned int)v4, &Object);
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
          ObfDereferenceObject(v7);
        }
        ObCloseHandle(Handle, 0);
      }
      Win32FreePool();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
