/*
 * XREFs of ?OpenInternalSharedResource@CApplicationChannel@DirectComposition@@QEAAJPEAXI_NPEAPEAVCResourceMarshaler@2@@Z @ 0x1C002E574
 * Callers:
 *     NtDCompositionOpenSharedResource @ 0x1C0013A90 (NtDCompositionOpenSharedResource.c)
 * Callees:
 *     GetSharedResourceData @ 0x1C0013E50 (GetSharedResourceData.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C001485C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z @ 0x1C002E3F8 (-RegisterResource@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::OpenInternalSharedResource(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        unsigned int a3,
        __int64 a4,
        struct DirectComposition::CResourceMarshaler **Object)
{
  struct DirectComposition::CResourceMarshaler **v5; // r15
  unsigned int v8; // ecx
  void *v9; // r10
  __int64 v10; // r8
  char v11; // r9
  __int64 (__fastcall *v12)(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **); // rdi
  __int64 v13; // rdx
  int v14; // eax
  struct DirectComposition::CResourceMarshaler **v15; // rsi
  int v16; // ebx
  __int64 (__fastcall *v18[2])(const struct DirectComposition::CSharedSystemResource *, int, struct DirectComposition::CTargetVisualMarshaler **); // [rsp+20h] [rbp-10h] BYREF

  v5 = Object;
  *Object = 0LL;
  if ( GetSharedResourceData(a3, v18) )
  {
    GetSharedResourceData(v8, v18);
    LOBYTE(v10) = 1;
    if ( v11 )
    {
      v12 = v18[1];
      v13 = 2LL;
    }
    else
    {
      v12 = v18[0];
      v13 = 1LL;
    }
    v14 = DirectComposition::ResourceObject::ResolveHandle(
            v9,
            v13,
            v10,
            (struct DirectComposition::ResourceObject **)&Object);
    v15 = Object;
    v16 = v14;
    if ( v14 >= 0 )
    {
      if ( v12 )
      {
        v16 = v12(
                (const struct DirectComposition::CSharedSystemResource *)(Object + 3),
                a3,
                (struct DirectComposition::CTargetVisualMarshaler **)&Object);
        if ( v16 >= 0 )
        {
          v16 = DirectComposition::CApplicationChannel::RegisterResource(
                  this,
                  (struct DirectComposition::CResourceMarshaler *)Object);
          if ( v16 < 0 )
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
        v16 = -1073741811;
      }
      ObfDereferenceObject(v15);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v16;
}
