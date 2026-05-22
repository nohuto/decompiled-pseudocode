/*
 * XREFs of ?GetBounds@DisplayBinding@@UEAAJPEAJ0@Z @ 0x18001C370
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z @ 0x180027ECC (-GetAt@PropertyMap@Input@@QEBAJAEBU_GUID@@PEAPEAVPropertyNode@2@@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DisplayBinding::GetBounds(DisplayBinding *this, int *a2, int *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  __int64 v9; // rcx
  unsigned int v10; // edi
  struct Input::PropertyNode *v12; // [rsp+50h] [rbp+8h] BYREF
  struct Input::PropertyNode *v13; // [rsp+68h] [rbp+20h] BYREF

  if ( Input::PropertyMap::GetAt((DisplayBinding *)((char *)this + 56), &DISPLAYBINDING_INPUTDISPLAY_BOUNDS_WIDTH, &v12) == -2089336820
    || Input::PropertyMap::GetAt(
         (DisplayBinding *)((char *)this + 56),
         &DISPLAYBINDING_INPUTDISPLAY_BOUNDS_HEIGHT,
         &v13) == -2089336820 )
  {
    v9 = *((_QWORD *)this + 13);
    v10 = v9 == 0 ? 0x8007139F : 0;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v9 + 32LL))(v9, a2, a3);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 176, v10);
    }
    return v10;
  }
  else if ( *((_DWORD *)v12 + 10) <= 4u )
  {
    memcpy_0(a2, *((const void **)v12 + 4), *((unsigned int *)v12 + 10));
    if ( *((_DWORD *)v13 + 10) <= 4u )
    {
      memcpy_0(a3, *((const void **)v13 + 4), *((unsigned int *)v13 + 10));
      return 0;
    }
    v7 = -2147024774;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 183;
      goto LABEL_6;
    }
  }
  else
  {
    v7 = -2147024774;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v8 = 182;
LABEL_6:
      Template_qqq(v6, &MinInput_Warning_CheckResult, 0, v8, 122);
    }
  }
  return v7;
}
