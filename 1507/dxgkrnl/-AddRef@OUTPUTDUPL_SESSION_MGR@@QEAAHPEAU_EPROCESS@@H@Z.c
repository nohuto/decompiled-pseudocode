/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@H@Z @ 0x1C01524B8
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0157918 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(OUTPUTDUPL_SESSION_MGR *this, struct _EPROCESS *a2, int a3)
{
  __int64 v6; // rdx
  struct _EPROCESS *v7; // r8
  unsigned int v8; // esi
  __int64 v9; // r9
  int v10; // r13d
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  __int64 v13; // rcx
  char *i; // rbx
  int v15; // eax
  char *Buffer; // rax
  __int64 v17; // r14
  struct _EPROCESS *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v22[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, *((struct DXGFASTMUTEX *const *)this + 1));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v8 = 0;
  v9 = 0xFFFFFFFFLL;
  v10 = 0;
  v11 = -1;
  if ( !a3 )
    goto LABEL_5;
  if ( !*((_QWORD *)this + 6) )
  {
    *((_QWORD *)this + 6) = a2;
    v10 = 1;
  }
  if ( *((struct _EPROCESS **)this + 6) == a2 )
  {
LABEL_5:
    v12 = 0;
    v13 = 0LL;
    for ( i = (char *)**((_QWORD **)this + 2); (unsigned int)v13 < *((_DWORD *)this + 1); v13 = (unsigned int)(v13 + 1) )
    {
      if ( v8 )
        break;
      v6 = 32LL * (unsigned int)v13;
      v7 = *(struct _EPROCESS **)&i[v6 + 8];
      if ( a2 == v7 )
      {
        v15 = *(_DWORD *)&i[v6];
        v11 = v13;
        if ( v15 )
        {
          v8 = 1;
          *(_DWORD *)&i[v6] = v15 + 1;
        }
      }
      else if ( v11 == -1 && !v7 )
      {
        v11 = v13;
      }
      if ( v7 && *(_DWORD *)&i[v6] )
        ++v12;
    }
    if ( v12 >= *(_DWORD *)this && !v8 )
      goto LABEL_33;
    if ( v11 == -1 )
    {
      ++*((_DWORD *)this + 1);
      Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(*((void ***)this + 2), 32 * *((_DWORD *)this + 1), 1);
      i = Buffer;
      if ( !Buffer )
      {
        v8 = 0;
LABEL_33:
        if ( v10 )
          *((_QWORD *)this + 6) = 0LL;
        goto LABEL_35;
      }
      v11 = *((_DWORD *)this + 1) - 1;
      memset(&Buffer[32 * v11], 0, 0x20uLL);
    }
    v17 = 32LL * v11;
    v18 = *(struct _EPROCESS **)&i[v17 + 8];
    if ( v18 && v18 != a2 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v13, v6, v7, v9);
      *(_QWORD *)(v19 + 24) = 3881LL;
      WdLogEvent5_WdAssertion(v19);
    }
    if ( v11 == -1 )
    {
LABEL_32:
      if ( v8 )
        goto LABEL_35;
      goto LABEL_33;
    }
    if ( !v8 )
    {
      if ( *(_DWORD *)&i[v17] )
      {
        v20 = WdLogNewEntry5_WdAssertion(v13, v6, v7, v9);
        *(_QWORD *)(v20 + 24) = 3886LL;
        WdLogEvent5_WdAssertion(v20);
      }
      v8 = 1;
      *(_QWORD *)&i[v17 + 8] = a2;
      *(_DWORD *)&i[v17] = 1;
      *(LARGE_INTEGER *)&i[v17 + 16] = KeQueryPerformanceCounter(0LL);
      if ( v12 >= *((_DWORD *)this + 7) )
      {
        *((_DWORD *)this + 7) = v12 + 1;
        goto LABEL_32;
      }
    }
  }
LABEL_35:
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  return v8;
}
