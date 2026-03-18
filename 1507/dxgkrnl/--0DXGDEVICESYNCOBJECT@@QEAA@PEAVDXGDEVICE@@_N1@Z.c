/*
 * XREFs of ??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z @ 0x1C014F46C
 * Callers:
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 * Callees:
 *     <none>
 */

DXGDEVICESYNCOBJECT *__fastcall DXGDEVICESYNCOBJECT::DXGDEVICESYNCOBJECT(
        DXGDEVICESYNCOBJECT *this,
        struct DXGDEVICE *a2,
        char a3,
        char a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rcx

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
      v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      *(_QWORD *)(v10 + 24) = 6923LL;
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = *((_QWORD *)a2 + 42);
    *(_QWORD *)this = v11;
    *((_QWORD *)this + 1) = (char *)a2 + 336;
    if ( *(struct DXGDEVICE **)(v11 + 8) != (struct DXGDEVICE *)((char *)a2 + 336) )
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = this;
    *((_QWORD *)a2 + 42) = this;
  }
  return this;
}
