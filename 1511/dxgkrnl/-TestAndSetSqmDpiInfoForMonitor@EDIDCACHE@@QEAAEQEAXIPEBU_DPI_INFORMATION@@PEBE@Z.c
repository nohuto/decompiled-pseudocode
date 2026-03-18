/*
 * XREFs of ?TestAndSetSqmDpiInfoForMonitor@EDIDCACHE@@QEAAEQEAXIPEBU_DPI_INFORMATION@@PEBE@Z @ 0x1C00C35F8
 * Callers:
 *     ?SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z @ 0x1C00ACB04 (-SqmDpiInfoStream@@YAXPEBU_DPI_INFORMATION@@QEAXIPEBX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memcmp @ 0x1C0011FB0 (memcmp.c)
 *     ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C00C36E4 (-FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z.c)
 */

char __fastcall EDIDCACHE::TestAndSetSqmDpiInfoForMonitor(
        EDIDCACHE *this,
        char *a2,
        unsigned int a3,
        const struct _DPI_INFORMATION *a4,
        unsigned __int8 *a5)
{
  struct DXGFASTMUTEX *v7; // rdx
  int EdidInCache; // eax
  _OWORD *v11; // rdi
  char v12; // si
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v7 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 124);
  if ( !v7 )
    return 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, v7);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  EdidInCache = EDIDCACHE::FindEdidInCache(this, *(struct _LUID *)(a2 + 252), a3, a5);
  if ( EdidInCache == -1 || (v11 = (_OWORD *)((char *)this + 96 * EdidInCache + 608), !memcmp(v11, a4, 0x60uLL)) )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    *v11 = *(_OWORD *)a4;
    v11[1] = *((_OWORD *)a4 + 1);
    v11[2] = *((_OWORD *)a4 + 2);
    v11[3] = *((_OWORD *)a4 + 3);
    v11[4] = *((_OWORD *)a4 + 4);
    v11[5] = *((_OWORD *)a4 + 5);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v12;
}
