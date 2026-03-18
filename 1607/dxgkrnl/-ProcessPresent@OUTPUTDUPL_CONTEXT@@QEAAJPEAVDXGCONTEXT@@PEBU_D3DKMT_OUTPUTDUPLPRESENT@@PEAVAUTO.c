/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C018209C
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DE3E0 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 * Callees:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C017CE7C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0182190 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessPresent(
        OUTPUTDUPL_CONTEXT *this,
        struct DXGDEVICE **a2,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct AUTOEXPANDALLOCATION *a4,
        struct DXGCONTEXT **a5)
{
  DXGDXGIKEYEDMUTEX *v10; // rcx
  struct DXGDEVICE *v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-38h] BYREF
  struct DXGCONTEXT *v18; // [rsp+28h] [rbp-30h]
  int v19; // [rsp+30h] [rbp-28h]
  const struct _D3DKMT_OUTPUTDUPLPRESENT *v20; // [rsp+38h] [rbp-20h]
  struct AUTOEXPANDALLOCATION *v21; // [rsp+40h] [rbp-18h]
  struct DXGCONTEXT **v22; // [rsp+48h] [rbp-10h]

  if ( *((_DWORD *)this + 80) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 1904LL;
    return 0LL;
  }
  v10 = (DXGDXGIKEYEDMUTEX *)*((_QWORD *)this + *((unsigned int *)this + 11) + 6);
  v11 = (struct DXGDEVICE *)*((_QWORD *)v10 + 2);
  if ( v11 )
  {
    if ( v11 != a2[2] )
    {
      v16 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v16 + 24) = v11;
      *(_QWORD *)(v16 + 32) = a2[2];
      WdLogEvent5_WdAssertion(v16);
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
  v17 = 0;
  v19 = 0;
  v22 = a5;
  v18 = (struct DXGCONTEXT *)a2;
  v20 = a3;
  v21 = a4;
  return OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(this, (struct _OUTPUTDUPL_UPDATE_INFO *)&v17);
}
