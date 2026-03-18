/*
 * XREFs of ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@@Z @ 0x1C0094B30
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAI@Z @ 0x1C0096ED8 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     <none>
 */

DXGSYNCOBJECT *__fastcall DXGSYNCOBJECT::DXGSYNCOBJECT(
        DXGSYNCOBJECT *this,
        struct DXGGLOBAL *a2,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a3)
{
  __int128 v5; // xmm0

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 22) = 33;
  *((_DWORD *)this + 23) = 32;
  *((_QWORD *)this + 6) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 56), SynchronizationEvent, 0);
  KeInitializeSpinLock((PKSPIN_LOCK)this + 10);
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)&a3->Type;
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)&a3->Reserved.Reserved[1];
  *(_OWORD *)((char *)this + 184) = *(_OWORD *)&a3->Reserved.Reserved[3];
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)&a3->Reserved.Reserved[5];
  v5 = *(_OWORD *)&a3->Reserved.Reserved[7];
  *((_BYTE *)this + 232) = 0;
  *(_OWORD *)((char *)this + 216) = v5;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  return this;
}
