/*
 * XREFs of AudioDGGetStreamVpoDescription @ 0x1400172F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDescription@CVirtualProtectedOutput@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z @ 0x140016980 (-GetDescription@CVirtualProtectedOutput@@UEAAJPEAKPEAU_GUID@@0PEAPEAU2@@Z.c)
 *     MIDL_user_allocate @ 0x140017400 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     memcpy_0 @ 0x140019B52 (memcpy_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall AudioDGGetStreamVpoDescription(
        __int64 a1,
        CVirtualProtectedOutput *a2,
        unsigned int *a3,
        struct _GUID *a4,
        unsigned int *a5,
        _QWORD *a6)
{
  __int64 (__fastcall *v8)(CVirtualProtectedOutput *, unsigned int *, struct _GUID *, unsigned int *, struct _GUID **); // rdi
  int Description; // eax
  unsigned int v10; // edi
  size_t v11; // rbx
  void *v12; // rax
  void *v13; // rsi
  struct _GUID v14; // xmm0
  unsigned int v15; // ecx
  unsigned int v17; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-2Ch] BYREF
  void *Src; // [rsp+38h] [rbp-28h] BYREF
  struct _GUID v20; // [rsp+40h] [rbp-20h] BYREF

  v8 = *(__int64 (__fastcall **)(CVirtualProtectedOutput *, unsigned int *, struct _GUID *, unsigned int *, struct _GUID **))(*(_QWORD *)a2 + 24LL);
  if ( v8 == CVirtualProtectedOutput::GetDescription )
    Description = CVirtualProtectedOutput::GetDescription(a2, &v18, &v20, &v17, (struct _GUID **)&Src);
  else
    Description = v8(a2, &v18, &v20, &v17, (struct _GUID **)&Src);
  v10 = Description;
  if ( Description >= 0 )
  {
    v11 = 16LL * v17;
    v12 = MIDL_user_allocate(v11);
    v13 = v12;
    if ( v12 )
    {
      memcpy_0(v12, Src, v11);
      v14 = v20;
      *a3 = v18;
      v15 = v17;
      *a4 = v14;
      *a5 = v15;
      *a6 = v13;
    }
    CoTaskMemFree(Src);
  }
  return v10;
}
