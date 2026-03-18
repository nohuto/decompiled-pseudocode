/*
 * XREFs of ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C004066C
 * Callers:
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C00411B0 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 * Callees:
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C00405E0 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00485A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     GetSharedResourceData @ 0x1C007A060 (GetSharedResourceData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        unsigned int a3,
        __int64 a4,
        struct DirectComposition::CResourceMarshaler **Object)
{
  struct DirectComposition::CResourceMarshaler **v5; // r15
  __int64 v8; // rcx
  void *v9; // r10
  char v10; // r9
  __int64 (__fastcall *v11)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***); // rdi
  unsigned int v12; // edx
  int v13; // eax
  struct DirectComposition::CResourceMarshaler **v14; // rsi
  int v15; // ebx
  _QWORD v17[2]; // [rsp+20h] [rbp-10h] BYREF

  v5 = Object;
  *Object = 0LL;
  if ( (unsigned __int8)GetSharedResourceData(a3, v17) )
  {
    GetSharedResourceData(v8, v17);
    if ( v10 )
    {
      v11 = (__int64 (__fastcall *)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***))v17[1];
      v12 = 2;
    }
    else
    {
      v11 = (__int64 (__fastcall *)(struct DirectComposition::CResourceMarshaler **, _QWORD, struct DirectComposition::CResourceMarshaler ***))v17[0];
      v12 = 1;
    }
    v13 = DirectComposition::ResourceObject::ResolveHandle(
            v9,
            v12,
            1,
            (struct DirectComposition::ResourceObject **)&Object);
    v14 = Object;
    v15 = v13;
    if ( v13 >= 0 )
    {
      if ( v11 )
      {
        v15 = v11(Object + 3, a3, &Object);
        if ( v15 >= 0 )
        {
          v15 = DirectComposition::CApplicationChannel::RegisterResource(
                  this,
                  (struct DirectComposition::CResourceMarshaler *)Object);
          if ( v15 < 0 )
          {
            if ( Object )
              (*((void (__fastcall **)(struct DirectComposition::CResourceMarshaler **, __int64))*Object + 12))(
                Object,
                1LL);
          }
          else
          {
            *v5 = (struct DirectComposition::CResourceMarshaler *)Object;
          }
        }
      }
      else
      {
        v15 = -1073741811;
      }
      ObfDereferenceObject(v14);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v15;
}
