/*
 * XREFs of ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0
 * Callers:
 *     NtDCompositionProcessChannelBatchBuffer @ 0x1C003CD60 (NtDCompositionProcessChannelBatchBuffer.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C0003100 (-RedirectMouseToHwnd@CApplicationChannel@DirectComposition@@QEAAJIPEAUHWND__@@PEBUtagMsgRoutingI.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C003E0A0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C003F9B4 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C003FBAC (-SetResourceCallbackId@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1C003FC3C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z @ 0x1C003FD0C (-RemoveVisualChild@CApplicationChannel@DirectComposition@@QEAAJII@Z.c)
 *     ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C003FE28 (-AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z.c)
 *     ?SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z @ 0x1C003FF98 (-SetResourceDeletedNotificationTag@CApplicationChannel@DirectComposition@@QEAAJI_K@Z.c)
 *     ?GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z @ 0x1C0040038 (-GetAnimationTime@CApplicationChannel@DirectComposition@@QEAAJI_KPEA_J@Z.c)
 *     ?SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z @ 0x1C00400DC (-SetResourceAnimationProperty@CApplicationChannel@DirectComposition@@QEAAJIII@Z.c)
 *     ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C00401D8 (-SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z.c)
 *     ?SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z @ 0x1C00403A0 (-SetVisualInputSink@CApplicationChannel@DirectComposition@@QEAAJIPEAX@Z.c)
 *     ?SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z @ 0x1C0040480 (-SetResourceHandleProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEAX@Z.c)
 *     ?SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z @ 0x1C0040518 (-SetResourceFloatProperty@CApplicationChannel@DirectComposition@@QEAAJIIM@Z.c)
 *     ?OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z @ 0x1C0040628 (-OpenSharedResourceHandle@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAX@Z.c)
 *     ?OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z @ 0x1C00411B0 (-OpenSharedResource@CApplicationChannel@DirectComposition@@QEAAJIPEAXI_N@Z.c)
 *     ?CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z @ 0x1C004121C (-CreateResource@CApplicationChannel@DirectComposition@@QEAAJII_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     ?CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z @ 0x1C00E45FC (-CapturePointer@CApplicationChannel@DirectComposition@@QEAAJIW4CapturePointerType@@II_K@Z.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
        DirectComposition::CApplicationChannel *this,
        _DWORD *a2,
        unsigned int a3,
        char a4,
        unsigned int *a5)
{
  char v5; // r11
  DirectComposition::CApplicationChannel *v8; // r10
  int v9; // ebx
  struct DirectComposition::CResourceMarshaler *v10; // rcx
  _DWORD *v11; // rax
  unsigned int v12; // eax
  void *v13; // r9
  char *v14; // rdx
  unsigned int v15; // r8d
  _DWORD *v16; // r11
  unsigned int *v17; // rcx
  int Resource; // eax
  void **v19; // rcx
  unsigned int *v20; // r8
  _DWORD *v21; // rax
  _DWORD *v22; // rax
  _DWORD *v23; // rcx
  void **v24; // rax
  unsigned int *v25; // rax
  _DWORD *v26; // r8
  __int64 v27; // rbx
  unsigned int v28; // ecx
  _DWORD *v29; // r9
  int v30; // ecx
  unsigned __int64 v31; // r8
  struct DirectComposition::CResourceMarshaler *v32; // r11
  struct DirectComposition::CResourceMarshaler *v33; // rcx
  int v34; // eax
  char *v35; // rdx
  _DWORD *v36; // rax
  _DWORD *v37; // rax
  float *v38; // rax
  void **v39; // rax
  _DWORD *v40; // rax
  __int64 v41; // r9
  unsigned int v42; // r11d
  int v43; // ecx
  unsigned __int64 v44; // r8
  struct DirectComposition::CResourceMarshaler *v45; // rcx
  bool v46; // al
  char v47; // cl
  bool v48; // zf
  struct DirectComposition::CResourceMarshaler *v49; // rcx
  int v50; // eax
  char *v51; // rdx
  unsigned int *v52; // r11
  unsigned __int64 v53; // rcx
  const unsigned int *v54; // r9
  _DWORD *v55; // rax
  int v56; // ebx
  int v57; // ecx
  __int64 v58; // r9
  unsigned __int64 v59; // r8
  __int64 v60; // rax
  struct DirectComposition::CResourceMarshaler *v61; // r11
  unsigned __int64 v62; // r8
  _DWORD *v63; // rcx
  _DWORD *v64; // rcx
  const struct tagMsgRoutingInfo *v65; // r9
  _DWORD *v66; // rax
  void **v67; // rax
  unsigned int *v69; // [rsp+20h] [rbp-58h]
  char v70; // [rsp+40h] [rbp-38h] BYREF
  char v71; // [rsp+41h] [rbp-37h] BYREF
  _BYTE v72[2]; // [rsp+42h] [rbp-36h] BYREF
  unsigned int Size; // [rsp+44h] [rbp-34h]
  unsigned int Size_4; // [rsp+48h] [rbp-30h]
  struct DirectComposition::CResourceMarshaler *v75; // [rsp+50h] [rbp-28h]
  void *Src; // [rsp+58h] [rbp-20h]

  v5 = a4;
  v8 = this;
  v9 = 0;
  while ( v9 >= 0 )
  {
    if ( a3 < 4 )
    {
      if ( a3 )
        return (unsigned int)-1073741811;
      return (unsigned int)v9;
    }
    ++*a5;
    switch ( *a2 )
    {
      case 0:
        v10 = 0LL;
        v75 = 0LL;
        v11 = a2;
        if ( a3 < 0x18 || !v5 )
        {
          v9 = -1073741811;
          goto LABEL_22;
        }
        a2 += 6;
        a3 -= 24;
        Src = (void *)*((_QWORD *)v11 + 1);
        Size = v11[4];
        Size_4 = Size;
        if ( !Size )
          v9 = -1073741811;
        if ( v9 < 0 )
        {
          v15 = Size;
        }
        else
        {
          v10 = (struct DirectComposition::CResourceMarshaler *)Win32AllocPoolWithQuota();
          v75 = v10;
          if ( !v10 )
          {
            v9 = -1073741801;
            goto LABEL_21;
          }
          v12 = Size;
          v13 = Src;
          v14 = (char *)Src + Size;
          if ( v14 < Src || (unsigned __int64)v14 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v10, v13, v12);
          v15 = Size;
        }
        if ( v9 >= 0 )
          v9 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(this, v75, v15, 0, a5);
        v10 = v75;
LABEL_21:
        v8 = this;
        v5 = a4;
LABEL_22:
        if ( v10 )
        {
          Win32FreePool();
          goto LABEL_24;
        }
        continue;
      case 1:
        v16 = a2;
        if ( a3 < 0x10 )
          goto LABEL_102;
        v17 = a2 + 2;
        if ( (unsigned int)(a2[2] - 1) > 0x7A )
          goto LABEL_102;
        a2 += 4;
        a3 -= 16;
        Resource = DirectComposition::CApplicationChannel::CreateResource(v8, v16[1], *v17, v16[3] != 0);
        goto LABEL_35;
      case 2:
        v19 = (void **)a2;
        if ( a3 < 0x18 )
          goto LABEL_33;
        v20 = a2 + 4;
        if ( (unsigned int)(a2[4] - 1) > 0x7A )
          goto LABEL_33;
        a2 += 6;
        a3 -= 24;
        Resource = DirectComposition::CApplicationChannel::OpenSharedResource(
                     v8,
                     *((_DWORD *)v19 + 1),
                     v19[1],
                     *v20,
                     *((_DWORD *)v19 + 5) != 0);
        goto LABEL_35;
      case 3:
        v21 = a2;
        if ( a3 < 8 )
          goto LABEL_33;
        a2 += 2;
        a3 -= 8;
        Resource = DirectComposition::CApplicationChannel::ReleaseResource(v8, v21[1]);
        goto LABEL_35;
      case 4:
        v22 = a2;
        if ( a3 < 0x18 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 6;
        a3 -= 24;
        Resource = DirectComposition::CApplicationChannel::GetAnimationTime(
                     v8,
                     v22[1],
                     *((_QWORD *)v22 + 1),
                     (__int64 *)v22 + 2);
        goto LABEL_35;
      case 5:
        v23 = a2;
        if ( a3 < 0x20 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 8;
        a3 -= 32;
        LODWORD(v69) = v23[4];
        Resource = DirectComposition::CApplicationChannel::CapturePointer(
                     v8,
                     (unsigned int)v23[1],
                     (unsigned int)v23[2],
                     (unsigned int)v23[3],
                     v69,
                     *((_QWORD *)v23 + 3));
        goto LABEL_35;
      case 6:
        v24 = (void **)a2;
        if ( a3 < 0x10 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 4;
        a3 -= 16;
        Resource = DirectComposition::CApplicationChannel::OpenSharedResourceHandle(v8, *((_DWORD *)v24 + 1), v24 + 1);
        goto LABEL_35;
      case 7:
        v36 = a2;
        if ( a3 < 0xC )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 3;
        a3 -= 12;
        Resource = DirectComposition::CApplicationChannel::SetResourceCallbackId(v8, v36[1], v36[2]);
        goto LABEL_35;
      case 8:
        v40 = a2;
        if ( a3 < 0x18 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 6;
        a3 -= 24;
        v41 = *((_QWORD *)v40 + 2);
        v42 = v40[2];
        Size_4 = v42;
        v43 = v40[1];
        v70 = 0;
        v44 = (unsigned int)(v43 - 1);
        if ( !v43 )
          goto LABEL_100;
        if ( v44 >= *((_QWORD *)v8 + 11) )
          goto LABEL_100;
        _mm_lfence();
        v45 = *(struct DirectComposition::CResourceMarshaler **)(v44 * *((_QWORD *)v8 + 12) + *((_QWORD *)v8 + 8));
        v75 = v45;
        if ( !v45 )
          goto LABEL_100;
        v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, char *))(*(_QWORD *)v45 + 128LL))(
               v45,
               v8,
               v42,
               v41,
               &v70);
        if ( v9 >= 0 && *((_QWORD *)v75 + 4) )
        {
          v46 = DirectComposition::CApplicationChannel::UnbindAnimation(this, v75, Size_4);
          v47 = v70;
          if ( v46 )
            v47 = 1;
          v70 = v47;
        }
        else
        {
          v47 = v70;
        }
        if ( v9 < 0 )
          goto LABEL_24;
        v48 = v47 == 0;
        goto LABEL_92;
      case 9:
        v38 = (float *)a2;
        if ( a3 < 0x10 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 4;
        a3 -= 16;
        Resource = DirectComposition::CApplicationChannel::SetResourceFloatProperty(
                     v8,
                     *((_DWORD *)v38 + 1),
                     *((_DWORD *)v38 + 2),
                     v38[3]);
        goto LABEL_35;
      case 0xA:
        v39 = (void **)a2;
        if ( a3 < 0x18 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 6;
        a3 -= 24;
        Resource = DirectComposition::CApplicationChannel::SetResourceHandleProperty(
                     v8,
                     *((_DWORD *)v39 + 1),
                     *((_DWORD *)v39 + 2),
                     v39[2]);
        goto LABEL_35;
      case 0xB:
        v26 = a2;
        if ( a3 < 0x10 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 4;
        a3 -= 16;
        v27 = (unsigned int)v26[3];
        v28 = (v27 + 3) & 0xFFFFFFFC;
        if ( v28 < (unsigned int)v27 || a3 < v28 )
        {
LABEL_33:
          v9 = -1073741811;
          continue;
        }
        v29 = a2;
        a2 = (_DWORD *)((char *)a2 + v28);
        a3 -= v28;
        Size_4 = v26[2];
        v30 = v26[1];
        v31 = (unsigned int)(v30 - 1);
        if ( !v30
          || v31 >= *((_QWORD *)v8 + 11)
          || (_mm_lfence(),
              v32 = *(struct DirectComposition::CResourceMarshaler **)(v31 * *((_QWORD *)v8 + 12) + *((_QWORD *)v8 + 8)),
              (v75 = v32) == 0LL) )
        {
          v9 = -1073741790;
          goto LABEL_37;
        }
        v71 = 0;
        v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, _DWORD *, __int64, char *))(*(_QWORD *)v32 + 152LL))(
               v32,
               v8,
               Size_4,
               v29,
               v27,
               &v71);
        if ( v9 < 0 )
          goto LABEL_36;
        if ( !v71 )
          goto LABEL_36;
        v33 = v75;
        v34 = *((_DWORD *)v75 + 4);
        if ( (v34 & 2) != 0 )
          goto LABEL_36;
        if ( (v34 & 1) != 0 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v75 + 112LL))(
                 v75,
                 95LL) )
          {
            v35 = (char *)this + 424;
          }
          else
          {
            v35 = (char *)this + 416;
          }
          v33 = v75;
          *((_QWORD *)v75 + 1) = *(_QWORD *)v35;
          *(_QWORD *)v35 = v33;
        }
        *((_DWORD *)v33 + 4) |= 2u;
        v8 = this;
        *((_BYTE *)this + 248) |= 1u;
        goto LABEL_37;
      case 0xC:
        v55 = a2;
        if ( a3 >= 0x10 )
        {
          a2 += 4;
          a3 -= 16;
          v56 = v55[3];
          Size_4 = v55[2];
          v57 = v55[1];
          v72[0] = 0;
          v58 = 0LL;
          v59 = (unsigned int)(v57 - 1);
          if ( v57
            && v59 < *((_QWORD *)v8 + 11)
            && (_mm_lfence(),
                v60 = *((_QWORD *)v8 + 8),
                v61 = *(struct DirectComposition::CResourceMarshaler **)(v59 * *((_QWORD *)v8 + 12) + v60),
                (v75 = v61) != 0LL) )
          {
            if ( !v56
              || (v62 = (unsigned int)(v56 - 1), v62 < *((_QWORD *)v8 + 11))
              && (v58 = *(_QWORD *)(v62 * *((_QWORD *)v8 + 12) + v60)) != 0 )
            {
              v9 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v61 + 160LL))(
                     v61,
                     v8,
                     Size_4,
                     v58,
                     v72);
              if ( v9 < 0 )
                goto LABEL_24;
              v48 = v72[0] == 0;
LABEL_92:
              if ( v48 || (v49 = v75, v50 = *((_DWORD *)v75 + 4), (v50 & 2) != 0) )
              {
LABEL_24:
                v8 = this;
              }
              else
              {
                if ( (v50 & 1) != 0 )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v75 + 112LL))(
                         v75,
                         95LL) )
                  {
                    v51 = (char *)this + 424;
                  }
                  else
                  {
                    v51 = (char *)this + 416;
                  }
                  v49 = v75;
                  *((_QWORD *)v75 + 1) = *(_QWORD *)v51;
                  *(_QWORD *)v51 = v49;
                }
                *((_DWORD *)v49 + 4) |= 2u;
                v8 = this;
                *((_BYTE *)this + 248) |= 1u;
              }
            }
            else
            {
              v9 = -1073741811;
            }
          }
          else
          {
LABEL_100:
            v9 = -1073741790;
          }
          v5 = a4;
        }
        else
        {
          v9 = -1073741811;
        }
        continue;
      case 0xD:
        v52 = a2;
        if ( a3 < 0x10 || (a2 += 4, a3 -= 16, v53 = 4LL * v52[3], v53 >> 2 != v52[3]) || a3 < v53 )
        {
LABEL_102:
          v9 = -1073741811;
          goto LABEL_37;
        }
        v54 = a2;
        a2 = (_DWORD *)((char *)a2 + v53);
        a3 -= v53;
        Resource = DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
                     v8,
                     v52[1],
                     v52[2],
                     v54,
                     v52[3]);
        goto LABEL_35;
      case 0xE:
        v25 = a2;
        if ( a3 < 0x10 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 4;
        a3 -= 16;
        Resource = DirectComposition::CApplicationChannel::SetResourceAnimationProperty(v8, v25[1], v25[2], v25[3]);
        goto LABEL_35;
      case 0xF:
        v37 = a2;
        if ( a3 < 0x10 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 4;
        a3 -= 16;
        Resource = DirectComposition::CApplicationChannel::SetResourceDeletedNotificationTag(
                     v8,
                     v37[1],
                     *((_QWORD *)v37 + 1));
        goto LABEL_35;
      case 0x10:
        v63 = a2;
        if ( a3 < 0x14 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 5;
        a3 -= 20;
        Resource = DirectComposition::CApplicationChannel::AddVisualChild(v8, v63[1], v63[2], v63[3], v63[4]);
        goto LABEL_35;
      case 0x11:
        v64 = a2;
        if ( a3 < 0x38 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 14;
        a3 -= 56;
        if ( v64[6] )
          v65 = (const struct tagMsgRoutingInfo *)(v64 + 7);
        else
          v65 = 0LL;
        Resource = DirectComposition::CApplicationChannel::RedirectMouseToHwnd(
                     v8,
                     v64[1],
                     *((HWND *)v64 + 1),
                     v65,
                     v64[4],
                     v64[5]);
        goto LABEL_35;
      case 0x12:
        v67 = (void **)a2;
        if ( a3 < 0x10 )
        {
          v9 = -1073741811;
          continue;
        }
        a2 += 4;
        a3 -= 16;
        Resource = DirectComposition::CApplicationChannel::SetVisualInputSink(v8, *((_DWORD *)v67 + 1), v67[1]);
        goto LABEL_35;
      case 0x13:
        v66 = a2;
        if ( a3 >= 0xC )
        {
          a2 += 3;
          a3 -= 12;
          Resource = DirectComposition::CApplicationChannel::RemoveVisualChild(v8, v66[1], v66[2]);
LABEL_35:
          v9 = Resource;
LABEL_36:
          v8 = this;
LABEL_37:
          v5 = a4;
        }
        else
        {
          v9 = -1073741811;
        }
        break;
      default:
        goto LABEL_33;
    }
  }
  return (unsigned int)v9;
}
