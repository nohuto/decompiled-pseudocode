/*
 * XREFs of ?ReleaseDdiEnumerator@DMMVIDPNSOURCEMODESET@@QEAAJPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0081600
 * Callers:
 *     ?ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0081790 (-ReleaseModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__.c)
 *     ?ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00BE550 (-ReleaseModeInfo@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(
        DMMVIDPNSOURCEMODESET *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax

  if ( a2 )
  {
    v3 = &a2[-1].Format.Text + 4;
    if ( a2[-1].Format.Graphics.Stride == 305419896 )
    {
      v4 = v3[1];
      if ( !v4 )
        goto LABEL_11;
      v5 = (_QWORD *)((char *)this + 48);
      if ( (_QWORD *)*v5 == v5 )
        goto LABEL_14;
      v6 = *v5 - 8LL;
      if ( *v5 == 8LL )
        goto LABEL_14;
      while ( v6 != v4 )
      {
        v7 = *(_QWORD **)(v6 + 8);
        if ( v7 != v5 )
        {
          v6 = (__int64)(v7 - 1);
          if ( v6 )
            continue;
        }
        goto LABEL_14;
      }
      if ( !v6 )
      {
LABEL_14:
        v11 = WdLogNewEntry5_WdError(v4);
        *(_QWORD *)(v11 + 24) = v3;
        *(_QWORD *)(v11 + 32) = this;
        WdLogEvent5_WdError(v11);
        return 3223192368LL;
      }
      else
      {
LABEL_11:
        ExFreePoolWithTag(v3, 0);
        return 0LL;
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(this);
      *(_QWORD *)(v10 + 24) = v3;
      WdLogEvent5_WdError(v10);
      return 3223192336LL;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdError(v9);
    return 3223192336LL;
  }
}
