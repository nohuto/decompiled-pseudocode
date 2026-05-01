/*
 * XREFs of ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DD2C
 * Callers:
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x180003554 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z @ 0x18000CDE0 (-PerformReleaseResources@ResourceSet@ExecutionModel@@AEAAXK@Z.c)
 *     ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x1800101DC (-TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z.c)
 *     ?ReturnIoCountersToCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DE4C (-ReturnIoCountersToCirculation@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180036460 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 */

void __fastcall ExecutionModel::ResourceManager::ReplenishIoCounterPool(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2)
{
  __int64 v2; // r9
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rdi
  unsigned __int64 v8; // r8
  int v9; // edx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned __int64 v12; // [rsp+38h] [rbp-39h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v15; // [rsp+68h] [rbp-9h]
  int v16; // [rsp+70h] [rbp-1h]
  int v17; // [rsp+74h] [rbp+3h]
  __int64 *v18; // [rsp+78h] [rbp+7h]
  int v19; // [rsp+80h] [rbp+Fh]
  int v20; // [rsp+84h] [rbp+13h]
  __int64 *v21; // [rsp+88h] [rbp+17h]
  int v22; // [rsp+90h] [rbp+1Fh]
  int v23; // [rsp+94h] [rbp+23h]
  _QWORD *v24; // [rsp+98h] [rbp+27h]
  int v25; // [rsp+A0h] [rbp+2Fh]
  int v26; // [rsp+A4h] [rbp+33h]
  _QWORD *v27; // [rsp+A8h] [rbp+37h]
  int v28; // [rsp+B0h] [rbp+3Fh]
  int v29; // [rsp+B4h] [rbp+43h]
  unsigned __int64 v30; // [rsp+E0h] [rbp+6Fh] BYREF

  v30 = a2;
  v2 = *((_QWORD *)this + 23);
  if ( (*(_BYTE *)(v2 + 1344) & 4) == 0 )
  {
    v4 = (_QWORD *)((char *)this + 200);
    v5 = a2;
    v6 = *((_QWORD *)this + 25);
    v7 = (_QWORD *)(v2 + 248);
    if ( v6 < a2 )
      v5 = *((_QWORD *)this + 25);
    v8 = a2 - v5;
    v13 = v5;
    v12 = v8;
    *v4 = v6 - v5;
    *v7 += v8;
    if ( v12 )
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(this);
    if ( (unsigned int)dword_180071060 > 4 )
    {
      if ( TlgKeywordOn(this, 1uLL) )
      {
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v15 = (__int64 *)&v30;
        v18 = (__int64 *)&v12;
        v21 = (__int64 *)&v13;
        v16 = v9 + 7;
        v19 = v9 + 7;
        v22 = v9 + 7;
        v24 = v7;
        v25 = v9 + 7;
        v27 = v4;
        v28 = v9 + 7;
        TlgWrite((TraceLoggingHProvider)(unsigned int)(v9 + 7), &unk_18006202E, v10, v11, 7u, &pData);
      }
    }
  }
}
