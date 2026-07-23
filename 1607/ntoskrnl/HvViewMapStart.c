/*
 * XREFs of HvViewMapStart @ 0x14060FD68
 * Callers:
 *     HvLoadHive @ 0x14047DA4C (HvLoadHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     CcClearPrivateWriteFile @ 0x1401B1EBC (CcClearPrivateWriteFile.c)
 *     CcSetPrivateWriteFile @ 0x1401B22F0 (CcSetPrivateWriteFile.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpTouchFile @ 0x140604498 (CmpTouchFile.c)
 *     HvpViewMapPrefetchFile @ 0x140610128 (HvpViewMapPrefetchFile.c)
 *     HvpViewMapViewOfPrimaryFile @ 0x14061020C (HvpViewMapViewOfPrimaryFile.c)
 *     HvpViewUnmapViewOfPrimaryFile @ 0x14061053C (HvpViewUnmapViewOfPrimaryFile.c)
 */

__int64 __fastcall HvViewMapStart(__int64 a1, __int64 a2, void *a3, unsigned int a4, char a5)
{
  NTSTATUS v9; // eax
  struct _FILE_OBJECT *v10; // rdi
  int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  unsigned int v16; // ebp
  int v17; // eax
  unsigned int i; // r14d
  unsigned int v19; // ebp
  _QWORD *v20; // r14
  PVOID Object[2]; // [rsp+30h] [rbp-38h] BYREF

  v9 = ObReferenceObjectByHandle(a3, 3u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, Object, 0LL);
  v10 = (struct _FILE_OBJECT *)Object[0];
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = *((_QWORD *)Object[0] + 5);
    if ( (!v12 || !*(_QWORD *)(v12 + 8)) && (int)CmpTouchFile(a3) < 0 )
    {
      v11 = -1073741491;
      goto LABEL_28;
    }
    if ( !CcSetPrivateWriteFile(v10) && !CcSetPrivateWriteFile(v10) )
    {
      v11 = -1073741670;
      goto LABEL_28;
    }
    v13 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a2 + 24))(1024LL, 0LL, 926240067LL);
    v14 = v13;
    if ( !v13 )
    {
      v11 = -1073741670;
LABEL_27:
      CcClearPrivateWriteFile(v10);
      goto LABEL_28;
    }
    memset(v13, 0, 0x400uLL);
    v16 = 0;
    if ( a4 )
    {
      while ( 1 )
      {
        v17 = 0x40000;
        if ( a4 - v16 < 0x40000 )
          v17 = a4 - v16;
        v11 = HvpViewMapViewOfPrimaryFile(a2, v14, v10, v16, v17);
        if ( v11 < 0 )
          break;
        v16 += 0x40000;
        if ( v16 >= a4 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      if ( (a5 & 1) == 0 )
        HvpViewMapPrefetchFile(v10, a4);
      *(_QWORD *)(a1 + 16) = v10;
      v10 = 0LL;
      *(_QWORD *)(a1 + 24) = v14;
      v14 = 0LL;
      v11 = 0;
      *(_DWORD *)a1 = a4;
    }
    if ( v14 )
    {
      for ( i = 0; i < v16; i += 0x40000 )
        HvpViewUnmapViewOfPrimaryFile(v15, v14, i, Object);
      v19 = 0;
      v20 = v14;
      do
      {
        if ( !*v20 )
          break;
        (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*v20, 2048LL);
        ++v19;
        ++v20;
      }
      while ( v19 < 0x80 );
      (*(void (__fastcall **)(_QWORD *, __int64))(a2 + 32))(v14, 1024LL);
    }
    if ( v11 < 0 )
      goto LABEL_27;
  }
LABEL_28:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v11;
}
