/*
 * XREFs of ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@H@Z @ 0x1C0156758
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C015BC30 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::AddRef(OUTPUTDUPL_SESSION_MGR *this, struct _EPROCESS *a2, int a3)
{
  unsigned int v6; // esi
  int v7; // r13d
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  __int64 v10; // rcx
  char *i; // rbx
  __int64 v12; // rdx
  struct _EPROCESS *v13; // r8
  int v14; // eax
  char *Buffer; // rax
  __int64 v16; // r14
  struct _EPROCESS *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v21[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, *((struct DXGFASTMUTEX *const *)this + 1));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v6 = 0;
  v7 = 0;
  v8 = -1;
  if ( !a3 )
    goto LABEL_5;
  if ( !*((_QWORD *)this + 6) )
  {
    *((_QWORD *)this + 6) = a2;
    v7 = 1;
  }
  if ( *((struct _EPROCESS **)this + 6) == a2 )
  {
LABEL_5:
    v9 = 0;
    v10 = 0LL;
    for ( i = (char *)**((_QWORD **)this + 2); (unsigned int)v10 < *((_DWORD *)this + 1); v10 = (unsigned int)(v10 + 1) )
    {
      if ( v6 )
        break;
      v12 = 32LL * (unsigned int)v10;
      v13 = *(struct _EPROCESS **)&i[v12 + 8];
      if ( a2 == v13 )
      {
        v14 = *(_DWORD *)&i[v12];
        v8 = v10;
        if ( v14 )
        {
          v6 = 1;
          *(_DWORD *)&i[v12] = v14 + 1;
        }
      }
      else if ( v8 == -1 && !v13 )
      {
        v8 = v10;
      }
      if ( v13 && *(_DWORD *)&i[v12] )
        ++v9;
    }
    if ( v9 >= *(_DWORD *)this && !v6 )
      goto LABEL_33;
    if ( v8 == -1 )
    {
      ++*((_DWORD *)this + 1);
      Buffer = (char *)AUTOEXPANDALLOCATION::GetBuffer(*((void ***)this + 2), 32 * *((_DWORD *)this + 1), 1);
      i = Buffer;
      if ( !Buffer )
      {
        v6 = 0;
LABEL_33:
        if ( v7 )
          *((_QWORD *)this + 6) = 0LL;
        goto LABEL_35;
      }
      v8 = *((_DWORD *)this + 1) - 1;
      memset(&Buffer[32 * v8], 0, 0x20uLL);
    }
    v16 = 32LL * v8;
    v17 = *(struct _EPROCESS **)&i[v16 + 8];
    if ( v17 && v17 != a2 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v18 + 24) = 3858LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( v8 == -1 )
    {
LABEL_32:
      if ( v6 )
        goto LABEL_35;
      goto LABEL_33;
    }
    if ( !v6 )
    {
      if ( *(_DWORD *)&i[v16] )
      {
        v19 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v19 + 24) = 3863LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v6 = 1;
      *(_QWORD *)&i[v16 + 8] = a2;
      *(_DWORD *)&i[v16] = 1;
      *(LARGE_INTEGER *)&i[v16 + 16] = KeQueryPerformanceCounter(0LL);
      if ( v9 >= *((_DWORD *)this + 7) )
      {
        *((_DWORD *)this + 7) = v9 + 1;
        goto LABEL_32;
      }
    }
  }
LABEL_35:
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return v6;
}
