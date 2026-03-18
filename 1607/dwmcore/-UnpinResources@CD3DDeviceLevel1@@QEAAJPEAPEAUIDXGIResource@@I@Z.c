/*
 * XREFs of ?UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x18017550C
 * Callers:
 *     ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180172F3C (-UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::UnpinResources(CD3DDeviceLevel1 *this, struct IDXGIResource **a2, unsigned int a3)
{
  unsigned int v3; // r14d
  unsigned int v6; // ebx
  char *v7; // rdi
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v6 = -2147467259;
  if ( !a3 )
    return v6;
  v7 = (char *)this + 1024;
  while ( 1 )
  {
    v12 = (__int64)*a2;
    v8 = *((_DWORD *)v7 + 6);
    v9 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_9;
    }
    v6 = 0;
    if ( v9 > *((_DWORD *)v7 + 5) )
      break;
    *(_QWORD *)(*(_QWORD *)v7 + 8LL * *((unsigned int *)v7 + 6)) = v12;
    *((_DWORD *)v7 + 6) = v9;
LABEL_10:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    ++v3;
    ++a2;
    if ( v3 >= a3 )
      return v6;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v7, 8u, 1, &v12);
  v6 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
LABEL_9:
  if ( (v6 & 0x80000000) == 0 )
    goto LABEL_10;
  if ( IsOOM(v6) && IsCompBuild() )
    NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1118u);
  return v6;
}
