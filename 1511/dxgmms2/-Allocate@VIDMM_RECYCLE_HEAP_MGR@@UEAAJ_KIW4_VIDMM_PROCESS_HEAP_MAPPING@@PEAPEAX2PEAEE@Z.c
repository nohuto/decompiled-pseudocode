/*
 * XREFs of ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C005A720
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0059D70 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C005C5E8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Allocate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        unsigned __int8 *a7,
        unsigned __int8 a8)
{
  unsigned int v8; // r12d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ebx
  VIDMM_RECYCLE_HEAP *v15; // rcx
  int v16; // eax
  __int64 v18; // rax
  char *v19; // [rsp+40h] [rbp-38h] BYREF
  char v20; // [rsp+48h] [rbp-30h]
  char v21; // [rsp+80h] [rbp+8h]
  int v22; // [rsp+98h] [rbp+20h]

  v22 = a4;
  v8 = a3;
  v19 = (char *)a1 + 416;
  v20 = 0;
  if ( a1 == (VIDMM_RECYCLE_HEAP_MGR *)-416LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(-416LL, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 451LL;
    WdLogEvent5_WdAssertion(v18);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v19, a2, a3, a4);
  LOBYTE(v13) = 0;
  v14 = v22;
  while ( 1 )
  {
    v21 = v13;
    switch ( v22 )
    {
      case 1:
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 16);
        break;
      case 2:
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 80);
        break;
      case 3:
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 144);
        break;
      case 4:
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 208);
        break;
      case 5:
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 272);
        break;
      case 6:
        v15 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)a1 + 336);
        break;
      default:
        goto LABEL_7;
    }
    v16 = VIDMM_RECYCLE_HEAP::Allocate(v15, a2, v8, a5, a6, a7, a8);
    LOBYTE(v13) = v21;
    v14 = v16;
LABEL_7:
    if ( v14 >= 0 || (_BYTE)v13 )
      break;
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(a1, 0, 0);
    LOBYTE(v13) = 1;
  }
  if ( v20 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v19, v13, v11, v12);
  return (unsigned int)v14;
}
