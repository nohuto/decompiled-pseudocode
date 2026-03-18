/*
 * XREFs of ??1CDXGIEnumeration@@MEAA@XZ @ 0x18006BCE0
 * Callers:
 *     ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x18006BEA0 (--_ECDXGIEnumeration@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x180138878 (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

void __fastcall CDXGIEnumeration::~CDXGIEnumeration(CDXGIEnumeration *this)
{
  void *v2; // rcx
  __int64 i; // rdi
  __int64 v4; // r14
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDXGIEnumeration::`vftable';
  v2 = (void *)*((_QWORD *)this + 12);
  if ( v2 )
  {
    if ( *((_DWORD *)this + 27) )
    {
      CloseHandle(v2);
    }
    else
    {
      v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
      if ( v10 )
      {
        v11 = (**v10)(*((_QWORD *)this + 2), &GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &v12);
        if ( v11 < 0 )
        {
          MilUnexpectedErrorWithAsimovEvent(
            v11,
            L"Could not query IDXGIFactory2 interface to unregister occlusion event.");
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 184LL))(v12, *((unsigned int *)this + 26));
          CloseHandle(*((HANDLE *)this + 12));
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 2));
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 3));
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 4));
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 5));
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 16LL))(*((_QWORD *)this + 6));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 64);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
