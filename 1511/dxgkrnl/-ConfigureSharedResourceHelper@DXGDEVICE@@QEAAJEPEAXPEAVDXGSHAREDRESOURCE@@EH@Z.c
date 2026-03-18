/*
 * XREFs of ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x1C006D0D8
 * Callers:
 *     ?ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C006D220 (-ConfigureSharedResource@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 *     ?ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z @ 0x1C0139BD4 (-ConfigureSharedResourceWithSharedHandle@DXGDEVICE@@QEAAJEPEAXIE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z @ 0x1C000C294 (--_GDXGPROCESSSHAREDACCESS@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ConfigureSharedResourceHelper(
        PERESOURCE *this,
        __int64 a2,
        void *a3,
        struct DXGSHAREDRESOURCE *a4,
        unsigned __int8 a5,
        int a6)
{
  char v8; // r14
  __int64 v10; // rbp
  PVOID v11; // rdi
  unsigned int v12; // esi
  __int64 *v13; // rbx
  DXGPROCESSSHAREDACCESS *v14; // rcx
  __int64 *i; // rdx
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rax
  DXGPROCESSSHAREDACCESS **v33; // r8
  DXGPROCESSSHAREDACCESS **v34; // rdx
  _BYTE v35[40]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v8 = a2;
  if ( !*((_DWORD *)this + 18) && !ExIsResourceAcquiredExclusiveLite(this[10]) )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v24 + 24) = 4488LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( !a4 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v25[4] = 0LL;
    v25[3] = this;
LABEL_26:
    v25[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225485LL;
  }
  v10 = *((_QWORD *)a4 + 17);
  if ( !v10 || a6 && *(PERESOURCE **)(v10 + 96) != this )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v25[3] = this;
    v25[4] = a4;
    goto LABEL_26;
  }
  v11 = 0LL;
  v12 = 0;
  if ( v8
    || (v26 = ObReferenceObjectByHandle(a3, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL),
        v11 = Object,
        v12 = v26,
        v26 >= 0) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, (struct DXGFASTMUTEX *const)(v10 + 8));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
    v13 = (__int64 *)(v10 + 72);
    v14 = 0LL;
    for ( i = *(__int64 **)(v10 + 72); i != v13; i = (__int64 *)*i )
    {
      if ( v8 )
      {
        if ( *((_BYTE *)i + 16) )
          goto LABEL_31;
      }
      else if ( !*((_BYTE *)i + 16) && (PVOID)i[3] == v11 )
      {
LABEL_31:
        v14 = (DXGPROCESSSHAREDACCESS *)(i - 1);
        break;
      }
    }
    if ( a5 )
    {
      if ( !v14 )
      {
        v16 = (char *)operator new[](0x28uLL, 0x4B677844u, PagedPool);
        if ( v16 )
        {
          v16[24] = v8;
          *((_QWORD *)v16 + 4) = v11;
          v21 = *v13;
          v22 = (__int64 *)(v16 + 8);
          *v22 = *v13;
          v22[1] = (__int64)v13;
          if ( *(__int64 **)(v21 + 8) != v13 )
            __fastfail(3u);
          *(_QWORD *)(v21 + 8) = v22;
          v11 = 0LL;
          *v13 = (__int64)v22;
        }
        else
        {
          v32 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
          v12 = -1073741801;
          *(_QWORD *)(v32 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v32);
        }
      }
    }
    else if ( v14 )
    {
      v33 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v14 + 1);
      v34 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v14 + 2);
      if ( v33[1] != (DXGPROCESSSHAREDACCESS *)((char *)v14 + 8) || *v34 != (DXGPROCESSSHAREDACCESS *)((char *)v14 + 8) )
        __fastfail(3u);
      *v34 = (DXGPROCESSSHAREDACCESS *)v33;
      v33[1] = (DXGPROCESSSHAREDACCESS *)v34;
      DXGPROCESSSHAREDACCESS::`scalar deleting destructor'(v14);
    }
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v35[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
  }
  else
  {
    v31 = WdLogNewEntry5_WdWarning(v28, v27, v29, v30);
    *(_QWORD *)(v31 + 24) = a3;
    WdLogEvent5_WdWarning(v31);
  }
  return v12;
}
