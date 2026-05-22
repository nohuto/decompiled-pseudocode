/*
 * XREFs of ?OnOrientationChanged@DisplayBinding@@UEAAJPEAUIInputDisplay@@W4DISPLAYCONFIG_ROTATION@@@Z @ 0x18001C940
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z @ 0x180027ECC (-GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayBinding::OnOrientationChanged(
        DisplayBinding *this,
        struct IInputDisplay *a2,
        enum DISPLAYCONFIG_ROTATION a3)
{
  Input::PropertyMap *v3; // rbp
  int v5; // edi
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // r9d
  struct Input::PropertyNode *v10; // [rsp+50h] [rbp+8h] BYREF
  enum DISPLAYCONFIG_ROTATION v11; // [rsp+60h] [rbp+18h] BYREF
  const void **v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = a3;
  v3 = (DisplayBinding *)((char *)this + 40);
  v5 = 1;
  LODWORD(v10) = 1;
  v7 = Input::PropertyMap::GetAt(
         (DisplayBinding *)((char *)this + 40),
         &DISPLAYBINDING_ORIENTATION,
         (struct Input::PropertyNode **)&v12);
  if ( v7 >= 0 )
  {
    if ( *((_DWORD *)v12 + 10) <= 4u )
    {
      memcpy_0(&v10, v12[4], *((unsigned int *)v12 + 10));
      v5 = (int)v10;
      v7 = 0;
    }
    else
    {
      v7 = -2147024774;
    }
  }
  if ( v7 >= 0 )
  {
    if ( v5 != a3 )
    {
      v7 = Input::PropertyMap::GetAt(v3, &DISPLAYBINDING_ORIENTATION, &v10);
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(struct Input::PropertyNode *, enum DISPLAYCONFIG_ROTATION *, __int64))(*(_QWORD *)v10 + 160LL))(
               v10,
               &v11,
               4LL);
      if ( v7 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v8 = 300;
        goto LABEL_14;
      }
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 295;
LABEL_14:
    Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v8, v7);
  }
  return (unsigned int)v7;
}
