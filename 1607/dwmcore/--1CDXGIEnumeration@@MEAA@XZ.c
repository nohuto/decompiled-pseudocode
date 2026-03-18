/*
 * XREFs of ??1CDXGIEnumeration@@MEAA@XZ @ 0x180036BA0
 * Callers:
 *     ??_ECDXGIEnumeration@@MEAAPEAXI@Z @ 0x180036D00 (--_ECDXGIEnumeration@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

void __fastcall CDXGIEnumeration::~CDXGIEnumeration(CDXGIEnumeration *this, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  __int64 i; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  int v13; // eax
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CDXGIEnumeration::`vftable';
  v4 = (void *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    if ( *((_DWORD *)this + 27) )
    {
      CloseHandle(v4);
    }
    else
    {
      v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
      if ( v12 )
      {
        v13 = (**v12)(v12, &GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &v14);
        if ( v13 < 0 )
        {
          MilUnexpectedErrorWithAsimovEvent(
            v13,
            L"Could not query IDXGIFactory2 interface to unregister occlusion event.");
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 184LL))(v14, *((unsigned int *)this + 26));
          CloseHandle(*((HANDLE *)this + 12));
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 5);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 6);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 64, a2, a3);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
