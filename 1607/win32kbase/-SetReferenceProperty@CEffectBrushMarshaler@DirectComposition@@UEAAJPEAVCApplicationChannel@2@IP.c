/*
 * XREFs of ?SetReferenceProperty@CEffectBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00E6AA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C00E45D8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CEffectBrushMarshaler::SetReferenceProperty(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // edi
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  void *v12; // rax
  unsigned __int64 v13; // r14
  struct DirectComposition::CResourceMarshaler *v14; // rdx
  DirectComposition::CResourceMarshaler *v15; // rcx
  int v16; // ebp
  struct DirectComposition::CResourceMarshaler **v17; // r14

  v5 = 0;
  *a5 = 0;
  if ( (a3 & 0xC0000000) == 0x80000000 )
  {
    if ( !a4
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
           a4,
           80LL)
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
           a4,
           79LL)
      || (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4 + 112LL))(
           a4,
           84LL) )
    {
      if ( !*((_QWORD *)this + 7) )
      {
        v10 = *((_QWORD *)this + 5);
        if ( v10 )
        {
          v11 = *(unsigned int *)(v10 + 64);
          if ( is_mul_ok(v11, 8uLL) )
          {
            v12 = Win32AllocPoolWithQuotaZInit(8 * v11);
            *((_QWORD *)this + 7) = v12;
            if ( v12 )
              *((_DWORD *)this + 16) = *(_DWORD *)(*((_QWORD *)this + 5) + 64LL);
            else
              v5 = -1073741801;
          }
          else
          {
            v5 = -1073741675;
          }
        }
        else
        {
          v5 = -1073741811;
        }
      }
      v13 = a3 & 0x3FFFFFFF;
      if ( v5 >= 0 )
      {
        if ( v13 >= *((unsigned int *)this + 16) )
          v5 = -1073741811;
        if ( v5 >= 0 )
        {
          v14 = *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * v13);
          if ( v14 )
            DirectComposition::CApplicationChannel::ReleaseResource(a2, v14);
          *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v13) = a4;
          v15 = *(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 7) + 8 * v13);
          if ( v15 )
            DirectComposition::CResourceMarshaler::AddRef(v15);
          *((_DWORD *)this + 17) = 0;
LABEL_34:
          *a5 = 1;
          return (unsigned int)v5;
        }
      }
      return (unsigned int)v5;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741811;
    v16 = 64;
    v17 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 48);
  }
  else
  {
    v17 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 40);
    v16 = 32;
  }
  if ( !v17
    || a4
    && !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)a4 + 112LL))(a4) )
  {
    return (unsigned int)-1073741811;
  }
  if ( *v17 != a4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, *v17);
    *v17 = a4;
    if ( a4 )
      DirectComposition::CResourceMarshaler::AddRef(a4);
    *((_DWORD *)this + 4) |= v16;
    goto LABEL_34;
  }
  return (unsigned int)v5;
}
