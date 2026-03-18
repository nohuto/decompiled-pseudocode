/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01584B0
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z @ 0x1C00B3C78 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z.c)
 * Callees:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0153F7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01585B8 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPresent(
        OUTPUTDUPL_CONTEXT *this,
        struct DXGDEVICE **a2,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct AUTOEXPANDALLOCATION *a4,
        struct DXGCONTEXT **a5)
{
  DXGDXGIKEYEDMUTEX *v10; // rcx
  struct DXGDEVICE *v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-38h] BYREF
  struct DXGCONTEXT *v23; // [rsp+28h] [rbp-30h]
  int v24; // [rsp+30h] [rbp-28h]
  const struct _D3DKMT_OUTPUTDUPLPRESENT *v25; // [rsp+38h] [rbp-20h]
  struct AUTOEXPANDALLOCATION *v26; // [rsp+40h] [rbp-18h]
  struct DXGCONTEXT **v27; // [rsp+48h] [rbp-10h]

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 1915LL;
    return 0LL;
  }
  v10 = (DXGDXGIKEYEDMUTEX *)*((_QWORD *)this + *((unsigned int *)this + 11) + 6);
  v11 = (struct DXGDEVICE *)*((_QWORD *)v10 + 2);
  if ( v11 )
  {
    if ( v11 != a2[2] )
    {
      v16 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v16 + 24) = v11;
      *(_QWORD *)(v16 + 32) = a2[2];
      WdLogEvent5_WdError(v16);
      v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = 1938LL;
      WdLogEvent5_WdAssertion(v21);
      return 3221225473LL;
    }
  }
  else
  {
    v12 = DXGDXGIKEYEDMUTEX::OpenForDevice(v10, a2[2]);
    v14 = v12;
    if ( v12 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v14;
      WdLogEvent5_WdError(v15);
      return (unsigned int)v14;
    }
  }
  v22 = 0;
  v24 = 0;
  v27 = a5;
  v23 = (struct DXGCONTEXT *)a2;
  v25 = a3;
  v26 = a4;
  return OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)&v22);
}
