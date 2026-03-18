/*
 * XREFs of ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C0177B2C
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00A4AA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     <none>
 */

DXGDEVICESYNCOBJECT *__fastcall DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(
        DXGDEVICESYNCOBJECT *this,
        struct DXGDEVICE *a2,
        char a3,
        char a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 68) = *((_BYTE *)this + 68) & 0xF8 | (2 * (a3 & 1 | (2 * (a4 & 1))));
  if ( a3 )
  {
    if ( !*((_DWORD *)a2 + 18) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)a2 + 10)) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v7 + 24) = 7246LL;
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = (_QWORD *)((char *)a2 + 360);
    v9 = *((_QWORD *)a2 + 45);
    if ( *(struct DXGDEVICE **)(v9 + 8) != (struct DXGDEVICE *)((char *)a2 + 360) )
      __fastfail(3u);
    *(_QWORD *)this = v9;
    *((_QWORD *)this + 1) = v8;
    *(_QWORD *)(v9 + 8) = this;
    *v8 = this;
  }
  return this;
}
