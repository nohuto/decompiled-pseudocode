/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C017B238
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0181558 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C017E688 (-TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(
        OUTPUTDUPL_SESSION_MGR *this,
        struct _EPROCESS *a2,
        struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // ebp
  unsigned int v8; // r15d
  __int64 v9; // rcx
  char *i; // rsi
  __int64 v11; // rdx
  struct _EPROCESS *v12; // r8
  int v13; // eax
  char *Buffer; // rax
  __int64 v15; // r14
  struct _EPROCESS *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  _BYTE v21[56]; // [rsp+20h] [rbp-38h] BYREF
  int v22; // [rsp+60h] [rbp+8h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, *((struct DXGFASTMUTEX *const *)this + 1));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v6 = 0;
  v22 = 0;
  v7 = -1;
  if ( a3 )
  {
    if ( !*((_QWORD *)this + 6) )
    {
      *((_QWORD *)this + 6) = a2;
      v22 = 1;
    }
    if ( *((struct _EPROCESS **)this + 6) != a2 || *((_DWORD *)this + 14) >= 0x10u )
      goto LABEL_37;
  }
  v8 = 0;
  v9 = 0LL;
  for ( i = (char *)**((_QWORD **)this + 2); (unsigned int)v9 < *((_DWORD *)this + 1); v9 = (unsigned int)(v9 + 1) )
  {
    if ( v6 )
      break;
    v11 = 32LL * (unsigned int)v9;
    v12 = *(struct _EPROCESS **)&i[v11 + 8];
    if ( a2 == v12 )
    {
      v13 = *(_DWORD *)&i[v11];
      v7 = v9;
      if ( v13 )
      {
        v6 = 1;
        *(_DWORD *)&i[v11] = v13 + 1;
      }
    }
    else if ( v7 == -1 && !v12 )
    {
      v7 = v9;
    }
    if ( v12 && *(_DWORD *)&i[v11] )
      ++v8;
  }
  if ( v8 >= *(_DWORD *)this && !v6 )
    goto LABEL_37;
  if ( v7 == -1 )
  {
    ++*((_DWORD *)this + 1);
    Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(*((void ***)this + 2), 32 * *((_DWORD *)this + 1), 1);
    i = Buffer;
    if ( !Buffer )
    {
      v6 = 0;
      goto LABEL_37;
    }
    v7 = *((_DWORD *)this + 1) - 1;
    memset(&Buffer[32 * v7], 0, 0x20uLL);
  }
  v15 = 32LL * v7;
  v16 = *(struct _EPROCESS **)&i[v15 + 8];
  if ( v16 && v16 != a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v17 + 24) = 3915LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( v7 != -1 )
  {
    if ( v6 )
      goto LABEL_34;
    if ( *(_DWORD *)&i[v15] )
    {
      v18 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v18 + 24) = 3920LL;
      WdLogEvent5_WdAssertion(v18);
    }
    *(_QWORD *)&i[v15 + 8] = a2;
    *(_DWORD *)&i[v15] = 1;
    *(LARGE_INTEGER *)&i[v15 + 16] = KeQueryPerformanceCounter(0LL);
    v6 = 1;
    if ( v8 < *((_DWORD *)this + 6) )
      goto LABEL_34;
    *((_DWORD *)this + 6) = v8 + 1;
  }
  if ( !v6 )
  {
LABEL_37:
    if ( v22 )
      *((_QWORD *)this + 6) = 0LL;
    goto LABEL_39;
  }
LABEL_34:
  if ( a3 )
  {
    v19 = 3LL * *((unsigned int *)this + 14);
    *(_OWORD *)((char *)this + 8 * v19 + 64) = *(_OWORD *)a3;
    *((_QWORD *)this + v19 + 10) = *((_QWORD *)a3 + 2);
    ++*((_DWORD *)this + 14);
    OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(this);
  }
LABEL_39:
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return v6;
}
