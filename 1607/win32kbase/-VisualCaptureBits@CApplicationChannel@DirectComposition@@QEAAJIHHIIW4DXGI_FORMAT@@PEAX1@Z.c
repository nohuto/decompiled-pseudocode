/*
 * XREFs of ?VisualCaptureBits@CApplicationChannel@DirectComposition@@QEAAJIHHIIW4DXGI_FORMAT@@PEAX1@Z @ 0x1C00E4B5C
 * Callers:
 *     NtVisualCaptureBits @ 0x1C00E3CC0 (NtVisualCaptureBits.c)
 * Callees:
 *     OpenDwmHandle @ 0x1C001D698 (OpenDwmHandle.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::VisualCaptureBits(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  int v13; // ebx
  unsigned __int64 v14; // rdx
  DirectComposition::CResourceMarshaler *v15; // r14
  void **v16; // rax
  void **v17; // rsi
  PVOID v18; // rbx
  PVOID v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r9
  void **v22; // rcx
  int v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+20h] [rbp-38h]
  void *v26; // [rsp+30h] [rbp-28h] BYREF
  void *v27; // [rsp+60h] [rbp+8h] BYREF

  v27 = (void *)-1LL;
  v26 = (void *)-1LL;
  if ( *(int *)(a1 + 24) <= 2 )
  {
    v14 = (unsigned int)(a2 - 1);
    if ( a2 && v14 < *(_QWORD *)(a1 + 88) )
    {
      _mm_lfence();
      v15 = *(DirectComposition::CResourceMarshaler **)(v14 * *(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 64));
    }
    else
    {
      v15 = 0LL;
    }
    if ( v15
      && (*(unsigned int (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)v15 + 16LL))(v15) == 32 )
    {
      v16 = (void **)Win32AllocPoolWithQuotaZInit(8uLL);
      v17 = v16;
      if ( v16 )
      {
        v18 = Object;
        v19 = Object;
        *v16 = Object;
        ObfReferenceObject(v19);
        v13 = OpenDwmHandle(v18, (POBJECT_TYPE)ExEventObjectType, 2u, v20, v24, &v27);
        if ( v13 >= 0 )
        {
          v13 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v21, v25, &v26);
          if ( v13 >= 0 )
          {
            DirectComposition::CApplicationChannel::ReleaseResource(
              (DirectComposition::CApplicationChannel *)a1,
              *(struct DirectComposition::CResourceMarshaler **)(a1 + 752));
            v22 = *(void ***)(a1 + 744);
            if ( v22 )
              DirectComposition::CEvent::`scalar deleting destructor'(v22);
            *(_DWORD *)(a1 + 768) = a5;
            *(_DWORD *)(a1 + 772) = a6;
            *(_DWORD *)(a1 + 776) = a7;
            *(_QWORD *)(a1 + 784) = v27;
            *(_QWORD *)(a1 + 792) = v26;
            *(_QWORD *)(a1 + 744) = v17;
            *(_DWORD *)(a1 + 760) = a3;
            *(_DWORD *)(a1 + 764) = a4;
            *(_QWORD *)(a1 + 752) = v15;
            DirectComposition::CResourceMarshaler::AddRef(v15);
            v17 = 0LL;
          }
        }
        if ( v17 )
          DirectComposition::CEvent::`scalar deleting destructor'(v17);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v13;
}
