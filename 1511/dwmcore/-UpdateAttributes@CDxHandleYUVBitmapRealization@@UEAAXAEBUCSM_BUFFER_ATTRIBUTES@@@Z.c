/*
 * XREFs of ?UpdateAttributes@CDxHandleYUVBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18015EC50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleYUVBitmapRealization::UpdateAttributes(
        CDxHandleYUVBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  *((_OWORD *)this + 30) = *(_OWORD *)((char *)a2 + 68);
  *((_OWORD *)this + 31) = *(_OWORD *)((char *)a2 + 92);
  *((_DWORD *)this + 128) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 129) = *((_DWORD *)a2 + 22);
  CDxHandleDecodeBitmapRealization::UpdateAttributes(this, a2);
}
